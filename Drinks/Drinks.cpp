#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> fractions(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> fractions[i];
    }

    double total = 0;
    for (int i = 0; i < n; ++i)
    {
        total += static_cast<double>(fractions[i]);
    }

    double result = total / static_cast<double>(n);

    cout << result << endl;
    return 0;
}
