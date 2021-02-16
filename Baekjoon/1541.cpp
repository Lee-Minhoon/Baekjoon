#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(void)
{
    string exp; cin >> exp;
    int size = exp.length();
    int res = 0;
    
    int dv = exp.find('-');
    int rep = dv;
    while (rep != string::npos) {
        exp.replace(rep, 1, "+");
        rep = exp.find('-');
    }

    string s;
    string p = exp.substr(0, dv);
    istringstream ssp(p);
    while (getline(ssp, s, '+')) {
        res += stoi(s);
    }
    if (dv != string::npos) {
        string m = exp.substr(dv + 1);
        istringstream ssm(m);
        while (getline(ssm, s, '+')) {
            res -= stoi(s);
        }
    }

    cout << res << endl;

    return 0;
}