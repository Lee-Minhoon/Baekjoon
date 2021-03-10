#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int Compare(const void* num1, const void* num2)
{
    int a = *(int*)num1;
    int b = *(int*)num2;
    unsigned int Asize = to_string(a).size() - 1;
    unsigned int Bsize = to_string(b).size() - 1;
    while (true)
    {
        if (a / pow(10, Asize) > b / pow(10, Bsize))
            return -1;
        else if (a / pow(10, Asize) < b / pow(10, Bsize))
            return 1;
        else
        {
            if (Asize == 0 && Bsize == 0)
                return 0;
            if (Asize > 0)
            {
                a = a % (int)pow(10, Asize);
                Asize--;
            }
            if (Bsize > 0)
            {
                b = b % (int)pow(10, Bsize);
                Bsize--;
            }
        }
    }
}

string solution(vector<int> numbers) {
    for (int i = numbers.size() - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            qsort(&numbers[0], numbers.size(), sizeof(int), Compare);
        }
    }


    string answer = "";
    if (numbers[0] == 0)
        answer = "0";
    else {
        for (int number : numbers)
            answer += to_string(number);
    }
    return answer;
}

int main()
{
    int t; cin >> t;
    vector<int> nums(t);
    for (int i = 0; i < t; i++) {
        cin >> nums[i];
    }
    solution(nums);
    return 0;
}