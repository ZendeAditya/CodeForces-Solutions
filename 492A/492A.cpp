#include <iostream>

int n, h, i, cnt;

int main()
{
    std::cin >> n;

    while (cnt <= n)
    {
        h++;
        cnt += (h * (h + 1)) / 2;
    }

    std::cout << h - 1 << std::endl;

    return 0;
}
