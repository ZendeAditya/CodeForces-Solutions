#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }
        map<int, vector<char>> m;
        string s = "";
        int cnt = 0;
        for (auto c : ans)
        {
            if (m[c].size() == 0)
            {
                m[c].push_back('a');
                s += 'a';
            }
            else
            {
                m[c].push_back(m[c][m[c].size() - 1] + 1);
                s += m[c][m[c].size() - 1];
            }
        }
        cout << s << endl;
    }
    return 0;
}
