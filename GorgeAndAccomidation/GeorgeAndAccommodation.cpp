#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int room;
    cin >> room;
    int count = 0;
    while (room--)
    {
        int p, q;
        cin >> p >> q;
         if (q - p >= 2) { 
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}
