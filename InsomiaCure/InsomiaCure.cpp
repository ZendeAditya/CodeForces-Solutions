#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int damageCount = 0;

    for (int i = 1; i <= d; ++i)
    {
        if (i % k == 0)
            damageCount++;
        else if (i % l == 0)
            damageCount++;
        else if (i % m == 0)
            damageCount++;
        else if (i % n == 0)
            damageCount++;
    }
    cout << damageCount << endl;
    return 0;
}
