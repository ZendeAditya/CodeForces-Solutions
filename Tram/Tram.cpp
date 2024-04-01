#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_capacity = 0;
    int current_capacity = 0;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        current_capacity -= a;
        current_capacity += b;
        max_capacity = max(max_capacity, current_capacity);
    }

    cout << max_capacity << endl;

    return 0;
}
