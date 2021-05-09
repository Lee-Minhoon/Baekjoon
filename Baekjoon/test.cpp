#include <iostream>
#include <string>
#include <vector>

using namespace std;

int search(int cacheSize, vector<string>& cache, string s)
{
    int t = cache.size();
    if (t == 0) {
        cache.push_back(s);
        return 5;
    }
    vector<string>::iterator it;
    for (it = cache.begin(); it < cache.end(); it++) {
        if (s == *it) {
            cache.erase(it);
            cache.insert(cache.begin(), s);
            return 1;
        }
    }
    if (t >= cacheSize) {
        cache.push_back(s);
        cache.erase(cache.begin());
    }
    else {
        cache.push_back(s);
    }
    return 5;
}

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;

    for (auto i : cities) {
<<<<<<< HEAD
        i = tolower(i);
=======
>>>>>>> 197d00f80d1a198a2d2176bd7dc364c5c71ea412
        answer += search(cacheSize, cache, i);
        vector<string>::iterator it;
        for (it = cache.begin(); it < cache.end(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }

    return answer;
}

int main()
{
    vector<string> s = { "Jeju", "Pangyo", "NewYork", "newyork" };

    cout << solution(2, s);
}