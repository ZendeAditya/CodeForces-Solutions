#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_set<char> charset;
    for (auto c : s)
    {
        charset.insert(c);
    };
    if (charset.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
