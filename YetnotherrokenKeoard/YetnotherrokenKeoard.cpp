#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer

    while (t--)
    {
        string s;
        getline(cin, s);

        string ans;

        for (char c : s)
        {
            if (c == 'B')
            {
                int pos = ans.size() - 1;
                while (pos >= 0 && !isupper(ans[pos]))
                {
                    pos--;
                }
                if (pos >= 0)
                {
                    ans.erase(pos, 1);
                }
            }
            else if (c == 'b')
            {
                int pos = ans.size() - 1;
                while (pos >= 0 && !islower(ans[pos]))
                {
                    pos--;
                }
                if (pos >= 0)
                {
                    ans.erase(pos, 1);
                }
            }
            else
            {
                ans += c;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
