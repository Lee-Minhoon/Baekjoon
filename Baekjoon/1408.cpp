#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Time {
    int hour;
    int min;
    int second;

    int getSeconds() {
        return hour * 3600 + min * 60 + second;
    }
};


int main(void)
{
    Time now, start;
    char sep;
    int res;

    cin >> now.hour >> sep >> now.min >> sep >> now.second;
    cin >> start.hour >> sep >> start.min >> sep >> start.second;

    if (now.getSeconds() <= start.getSeconds()) {
        res = start.getSeconds() - now.getSeconds();
    }
    else {
        res = 86400 - (now.getSeconds() - start.getSeconds());
    }

    printf("%02d:%02d:%02d", res / 3600, res % 3600 / 60, res % 60);

    return 0;
}