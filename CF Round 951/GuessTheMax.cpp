#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minElement = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            minElement = min(minElement, arr[i]);
        }

        cout << minElement - 1 << endl;
    }

    return 0;
}
