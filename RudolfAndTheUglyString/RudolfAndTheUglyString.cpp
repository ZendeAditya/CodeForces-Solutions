#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    int ans = 0;

    for (int i = 0; i < n - 2; i++)
    {
        string t = s.substr(i, 3);
        if (t == "pie" || t == "map")
        {
            i += 2;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
