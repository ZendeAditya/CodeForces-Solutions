#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, col, move = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                row = i + 1;
                col = j + 1;
            }
        }
    }
    move = abs(row - 3) + abs(col - 3);
    cout << move << endl;
    return 0;
}
