#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> mark(26, false);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (char c : s)
    {
        if (isalpha(c))
        {
            int index = c - 'a';
            mark[index] = true;
        }
    }
    bool isPangram = true;
    for (bool m : mark)
    {
        if (!m)
        {
            isPangram = false;
            break;
        }
    }
    if (isPangram)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
