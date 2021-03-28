#include<iostream>
#include<string>

using namespace std;

#define SIZE 10000

class Deque
{
private:
	int* deque = new int[SIZE];
	int f = 0;
	int r = 0;
public:
	void push_front(int n);
	void push_back(int n);
	int pop_front();
	int pop_back();
	int size();
	bool full();
	bool empty();
	int front();
	int back();
};

void Deque::push_front(int n)
{
	if (full()) cout << "µ¦ÀÌ °¡µæ Â÷ " << n << "À» µ¦¿¡ »ðÀÔÇÒ ¼ö ¾ø½À´Ï´Ù." << endl;
	else {
		deque[f] = n;
		f = (f - 1 + SIZE) % SIZE;
	}
}

void Deque::push_back(int n)
{
	if (full()) cout << "µ¦ÀÌ °¡µæ Â÷ " << n << "À» µ¦¿¡ »ðÀÔÇÒ ¼ö ¾ø½À´Ï´Ù." << endl;
	else {
		r = (r + 1) % SIZE;
		deque[r] = n;
	}
}

int Deque::pop_front()
{
	if (empty()) return -1;
	else {
		f = (f + 1) % SIZE;
		return deque[f];
	}
}

int Deque::pop_back()
{
	if (empty()) return -1;
	else {
		int ret = deque[r];
		r = (r - 1 + SIZE) % SIZE;
		return ret;
	}
}

int Deque::size()
{
	return (r - f + SIZE) % SIZE;
}

bool Deque::full()
{
	if (size() == SIZE - 1) return true;
	else return false;
}

bool Deque::empty()
{
	if (f == r) return true;
	else return false;
}

int Deque::front()
{
	if (empty()) return -1;
	else return deque[(f + 1) % SIZE];
}

int Deque::back()
{
	if (empty()) return -1;
	else return deque[r];
}

int main(void)
{
	Deque deque;
	int n; cin >> n;

	int num;
	for (int i = 0; i < n; i++) {
		string str; cin >> str;
		if (str == "push_front") {
			cin >> num; deque.push_front(num);
		}
		else if (str == "push_back") {
			cin >> num; deque.push_back(num);
		}
		else if (str == "pop_front") {
			cout << deque.pop_front() << "\n";
		}
		else if (str == "pop_back") {
			cout << deque.pop_back() << "\n";
		}
		else if (str == "size") {
			cout << deque.size() << "\n";
		}
		else if (str == "empty") {
			cout << deque.empty() << "\n";
		}
		else if (str == "front") {
			cout << deque.front() << "\n";
		}
		else {
			cout << deque.back() << "\n";
		}
	}

	return 0;
}