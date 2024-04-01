#include <bits/stdc++.h>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> vec;
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin >> val;
//         vec.push_back(val);
//     }
//     int val = 1;
//     auto it = find(vec.begin(), vec.end(), val);
//     if (it != vec.end())
//     {
//         cout << "HARD";
//     }
//     else
//     {
//         cout << "EASY";
//     }
//     return 0;
// }

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[a[i]];
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " \n"[i == n - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " \n"[i == n];
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[a[i]];
        }
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " \n"[i == n - 1];
        }
        for (int i = 1; i <= n; i++)
        {
            cout << b[i] << " \n"[i == n];
        }
    }
    return 0;
}
