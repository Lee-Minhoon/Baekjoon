#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int h, w, guest;

    std::cin >> n;

    int room_h;
    int room_w;
    for (int i = 0; i < n; i++)
    {
        std::cin >> h >> w >> guest;
        
        if (guest % h == 0)
        {
            room_h = h;
            room_w = guest / h;
        }
        else
        {
            room_h = guest % h;
            room_w = guest / h + 1;
        }

        if (room_w < 10) {
            room_h *= 10;
        }
        std::cout << room_h << room_w << "\n";
    }
    
    return 0;
}