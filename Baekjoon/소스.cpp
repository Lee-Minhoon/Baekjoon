#include <map>
#include <iostream>

using namespace std;

int main(void)
{
	map<string, int> m;
    string s = "headgear";
    cout << m[s] << endl;
    if (m[s] == 0) {
        cout << "find" << endl;
    }
    else {
        // m[s]++;
        
        cout << "not find" << endl;
        m.insert(make_pair(s, 11));
        cout << m[s] << endl;
    }
	return 0;
}