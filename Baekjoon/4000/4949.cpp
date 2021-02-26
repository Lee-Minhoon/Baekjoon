#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void)
{
    string str; getline(cin, str);
    while (str != ".") {
        int len = str.length();
        stack<char> stack;
        bool chk = true;
        for (int i = 0; i < len; i++) {
            if (str[i] == '(' || str[i] == '[') stack.push(str[i]);
            else if (str[i] == ')') {
                if (!stack.empty() && stack.top() == '(') stack.pop();
                else {
                    cout << "no" << endl;
                    chk = false;
                    break;
                }
            }
            else if (str[i] == ']') {
                if (!stack.empty() && stack.top() == '[') stack.pop();
                else {
                    cout << "no" << endl;
                    chk = false;
                    break;
                }
            }
        }
        if (chk) {
            if (stack.size() != 0) cout << "no" << endl;
            else cout << "yes" << endl;
        }
        getline(cin, str);
    }

    return 0;
}