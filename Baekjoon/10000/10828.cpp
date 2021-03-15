#include<iostream>
#include<string>

using namespace std;

#define SIZE 10000

class Stack
{
private:
	int stack[SIZE];
	int index = 0;
public:
	void push(int n);
	int pop();
	int size();
	bool full();
	bool empty();
	int top();
};

void Stack::push(int n)
{
	if (full()) cout << "스택이 가득 차 " << n << "을 스택에 삽입할 수 없습니다." << endl;
	else stack[index++] = n;
}

int Stack::pop()
{
	if (empty()) return -1;
	else return stack[--index];
}

int Stack::size()
{
	return index;
}

bool Stack::full()
{
	if (index == SIZE) return true;
	else return false;
}

bool Stack::empty()
{
	if (index == 0) return true;
	else return false;
}

int Stack::top()
{
	if (empty()) return -1;
	else return stack[index - 1];
}

int main(void)
{
	Stack stack;
	int n; cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string str; getline(cin, str);
		if (str.find("push ") != string::npos) {
			int num = stoi(str.substr(5));
			stack.push(num);
		}
		else if (str.find("pop") != string::npos) {
			cout << stack.pop() << endl;
		}
		else if (str.find("size") != string::npos) {
			cout << stack.size() << endl;
		}
		else if (str.find("empty") != string::npos) {
			cout << stack.empty() << endl;
		}
		else {
			cout << stack.top() << endl;
		}
	}

	return 0;
}