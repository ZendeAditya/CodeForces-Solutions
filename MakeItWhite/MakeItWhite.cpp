#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left = 0;
        int right = n - 1;
        while (left < n && s[left] == 'W')
        {
            left++;
        }
        while (right >= 0 && s[right] == 'W')
        {
            right--;
        }

        int segmentLength = (right - left + 1) <= 0 ? 0 : (right - left + 1);
        cout << segmentLength << endl;
    }

    return 0;
}
