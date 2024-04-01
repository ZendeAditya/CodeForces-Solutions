#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpp[a[i]]++;
    }
    ll ans = 0;
    int ch = 0;
    for (auto it : mpp)
    {
        int f = it.second;
        if (f > 1)
        {
            ans += ((f * (f - 1)) / 2) * 1ll * (ch > 0 ? ch : 0);
            if (f > 2)
            {
                ans += (f * 1ll * (f - 1) * 1ll * (f - 2) * 1ll) / 6ll;
            }
        }
        ch += f;
    }
    cout << ans << endl;
    return 0;
}