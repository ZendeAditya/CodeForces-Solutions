#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        string op;

        for (int i = 0; i < n;)
        {
            if (i < n - 2 && (s[i + 1] == 'a' || s[i + 1] == 'e'))
            {
                op += s[i];
                op += s[i + 1];
                op += s[i + 2];
                op += '.';
                i += 3;
            }
            else
            {
                op += s[i];
                op += s[i + 1];
                op += '.';
                i += 2;
            }
        }

        cout << op << endl;
    }

    return 0;
}
