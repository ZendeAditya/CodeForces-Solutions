#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        string s;
        cin >> s;
        int n = s.size();
        if (n > 10)
        {

            cout << s[0] << n - 2 << s[n - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
