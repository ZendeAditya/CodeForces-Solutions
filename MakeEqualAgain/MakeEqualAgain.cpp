#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int a[n];
    int first[n + 1];
    memset(first, -1, sizeof(first));
    int last[n + 1];
    int left[n];
    int right[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        last[a[i]] = i;
        if (first[a[i]] == -1)
            first[a[i]] = i;

        if (i == 0)
            left[i] = 0;
        else
        {
            if (a[i] == a[i - 1])
                left[i] = left[i - 1];
            else
                left[i] = i;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
            right[i] = n - 1;
        else
        {
            if (a[i] == a[i + 1])
                right[i] = right[i + 1];
            else
                right[i] = i;
        }
    }

    int ans = n;
    for (int i = 1; i <= n; i++)
    {
        if (first[i] == -1)
            continue;
        int ind = last[i];
        int end = 0;
        if (ind != n - 1)
        {
            end = n - 1;
        }
        else
            end = left[ind] - 1;

        int start = 0;
        if (first[i] == 0)
        {
            start = right[0] + 1;
        }
        else
        {
            start = 0;
        }
        ans = min(ans, max(0ll, end - start + 1));
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests = 1;
    cin >> tests;
    while (tests--)
    {
        solve();
    }
    return 0;
}