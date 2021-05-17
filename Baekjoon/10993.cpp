#include<iostream>
#include<cmath>

using namespace std;

int mid;

void star(int y, int x, int num, int top, int bot)
{
    // 좌변과 우변의 위치
    int left = mid - abs(top - y);
    int right = mid + abs(top - y);
    // y좌표가 하단과 같고 x좌표가 좌변과 우변 범위안에 속해있다면 '*' 출력
    if (y == bot && x >= left && x <= right) cout << '*';
    else if (x == left || x == right) {
        // x좌표가 좌변과 우변의 위치와 같고 y좌표가 상단과 하단 범위안에 속해있다면 '*' 출력
        if ((top > bot ? top : bot) >= y && (top < bot ? top : bot) <= y) cout << '*';
        // 아니라면 공백 출력
        else cout << ' ';
    }
    else {
        // 어디에도 속하지 않는 부분은 공백 출력
        if (num == 1) cout << ' ';
        // 상단과 하단 위치를 갱신하여 재귀 호출
        else star(y, x, num - 1, num % 2 == 0 ? bot + 1 : bot - 1, (top + bot) / 2);
    }
}

int main(void)
{
    int n; cin >> n;
    int height = pow(2, n) - 1;
    int width = height * 2 - 1;
    mid = width / 2;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < (n % 2 == 0 ? width - i : width - (mid - i)); j++) {
            // 제일 큰 삼각형의 형태가 역삼각형이라면
            if (n % 2 == 0) star(i, j, n, height - 1, 0);
            // 아니라면
            else star(i, j, n, 0, height - 1);
        }
        cout << '\n';
    }

    return 0;
}