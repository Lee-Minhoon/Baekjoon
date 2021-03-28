#include<iostream>
#include<string>

using namespace std;

#define SIZE 2000000

class Queue
{
private:
	int* queue = new int[SIZE];
	int f = 0;
	int r = 0;
public:
	void push(int n);
	int pop();
	int size();
	bool full();
	bool empty();
	int front();
	int back();
};

void Queue::push(int n)
{
	if (full()) cout << "큐가 가득 차 " << n << "을 큐에 삽입할 수 없습니다." << endl;
	else queue[r++] = n;
}

int Queue::pop()
{
	if (empty()) return -1;
	else return queue[f++];
}

int Queue::size()
{
	return r - f;
}

bool Queue::full()
{
	if (r == SIZE) return true;
	else return false;
}

bool Queue::empty()
{
	if (f == r) return true;
	else return false;
}

int Queue::front()
{
	if (empty()) return -1;
	else return queue[f];
}

int Queue::back()
{
	if (empty()) return -1;
	else return queue[r - 1];
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Queue queue;
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		string str; cin >> str;
		if (str == "push") {
			int num; cin >> num;
			queue.push(num);
		}
		else if (str == "pop") {
			cout << queue.pop() << "\n";
		}
		else if (str == "size") {
			cout << queue.size() << "\n";
		}
		else if (str == "empty") {
			cout << queue.empty() << "\n";
		}
		else if (str == "front") {
			cout << queue.front() << "\n";
		}
		else {
			cout << queue.back() << "\n";
		}
	}

	return 0;
}