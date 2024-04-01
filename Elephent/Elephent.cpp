#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    int sum = 0;
    int step = 0;
    while (x > 5)
    {
        step++;
        x -= 5;
    }
    if (x == 0)
    {

        cout << step << endl;
    }
    else
    {
        cout << step + 1 << endl;
    }

    return 0;
}
