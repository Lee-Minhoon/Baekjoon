#include<iostream>

using namespace std;

const int MAX = 100001;

class MaxHeap
{
private:
    int heap[MAX];
    int idx = 0;
public:
    int size();
    void push(int data);
    int pop();
    void swap(int* a, int* b);
    int select(int child);
};

int MaxHeap::size()
{
    return idx;
}

void MaxHeap::push(int data)
{
    heap[++idx] = data;

    int child = idx;
    int parent = child / 2;
    while (child > 1 && heap[child] > heap[parent]) {
        swap(&heap[child], &heap[parent]);
        child = parent;
        parent = child / 2;
    }
}

int MaxHeap::pop()
{
    int ret = heap[1];

    swap(&heap[idx--], &heap[1]);

    int parent = 1;
    int child = parent * 2;
    child = select(child);

    while (child <= idx && heap[parent] < heap[child]) {
        swap(&heap[parent], &heap[child]);
        parent = child;
        child = child * 2;
        child = select(child);
    }

    return ret;
}

void MaxHeap::swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int MaxHeap::select(int child)
{
    if (child + 1 <= idx) child = (heap[child] > heap[child + 1]) ? child : child + 1;
    return child;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    MaxHeap h;

    int n; cin >> n;

    while (n--) {
        int c; cin >> c;
        if (c == 0) {
            if (h.size()) cout << h.pop();
            else cout << 0;
            cout << '\n';
        }
        else h.push(c);
    }

    return 0;
}