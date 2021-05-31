#include<iostream>

using namespace std;

const int MAX = 100001;

class AbsMinHeap
{
private:
    int heap[MAX];
    int idx = 0;
public:
    int size();
    bool condition(int child, int parent);
    void push(int data);
    int pop();
    void swap(int* a, int* b);
    int select(int child);
};

int AbsMinHeap::size()
{
    return idx;
}

bool AbsMinHeap::condition(int child, int parent)
{
    if (abs(heap[child]) < abs(heap[parent])) return true;
    else if (abs(heap[parent]) < abs(heap[child])) return false;
    else {
        if (heap[child] < heap[parent]) return true;
        else return false;
    }
}

void AbsMinHeap::push(int data)
{
    heap[++idx] = data;

    int child = idx;
    int parent = child / 2;
    while (child > 1 && condition(child, parent)) {
        swap(&heap[child], &heap[parent]);
        child = parent;
        parent = child / 2;
    }
}

int AbsMinHeap::pop()
{
    int ret = heap[1];

    swap(&heap[idx--], &heap[1]);

    int parent = 1;
    int child = parent * 2;
    child = select(child);

    while (child <= idx && condition(child, parent)) {
        swap(&heap[parent], &heap[child]);
        parent = child;
        child = child * 2;
        child = select(child);
    }

    return ret;
}

void AbsMinHeap::swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int AbsMinHeap::select(int child)
{
    if (child + 1 <= idx) {
        if (abs(heap[child]) < abs(heap[child + 1])) return child;
        else if (abs(heap[child + 1]) < abs(heap[child])) return child + 1;
        else {
            if (heap[child] < heap[child + 1]) return child;
            else return child + 1;
        }
    }
    else return child;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    AbsMinHeap h;

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