#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Member {
public:
    int age;
    string name;
    Member(int age, string name) :age(age), name(name) {}
};

bool cmp(Member a, Member b)
{
    return a.age < b.age;
}

int main(void)
{
    int n; cin >> n;

    vector<Member> members;

    for (int i = 0; i < n; i++) {
        int age; cin >> age;
        string name; cin >> name;
        members.push_back(Member(age, name));
    }

    stable_sort(members.begin(), members.end(), cmp);
    
    for (vector<Member>::iterator it = members.begin(); it < members.end(); it++) {
        cout << it->age << " " << it->name << "\n";
    }

    return 0;
}