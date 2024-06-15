#include <bits/stdc++.h>
using namespace std;
long long minOperation(vector<int>& a, vector<int>& b)
{
    int n = a.size();
    int m = b.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long operations = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            operations += (b[j] - a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            operations += (a[i] - b[j]);
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while (j < m)
    {
        operations += b[j];
        j++;
    }
    while (j < n)
    {
        operations += a[i];
        i++;
    }
    return operations;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < n + 1; j++)
        {
            cin >> b[j];
        }
        cout << minOperation(a, b) << endl;
    }

    return 0;
}
