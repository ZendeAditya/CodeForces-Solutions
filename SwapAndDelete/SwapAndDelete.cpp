#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count_0 = 0, count_1 = 0;
        for (char c : s)
        {
            if (c == '0')
                count_0++;
            else
                count_1++;
        }
        int swaps_needed = min(count_0, count_1);
        int deletions_needed = abs(count_0 - count_1) - swaps_needed;
        int total_cost = deletions_needed;
        cout << total_cost << endl;
    }

    return 0;
}
