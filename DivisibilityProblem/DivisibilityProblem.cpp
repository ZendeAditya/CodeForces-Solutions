#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int moves = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int moves = (b - a % b) % b;
        cout << moves << endl;
    }
    return 0;
}
