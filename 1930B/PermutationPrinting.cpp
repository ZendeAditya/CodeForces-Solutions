#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int s = 1, e = n;
    for (int i = 1; i <= n; ++i)
    {
        if (i & 1)
            v.push_back(s++);
        else
            v.push_back(e--);
    }
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
