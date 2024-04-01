#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string guest;
    string host;
    string letterPile;
    cin >> guest;
    cin >> host;
    cin >> letterPile;
    unordered_map<char, int> mpp;
    for (auto c : letterPile)
    {
        mpp[c]++;
    }
    for (auto c : guest)
    {
        cout << "c:" << c << mpp[c] << endl;
        if (mpp[c] > 0)
        {
            mpp[c]--;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    for (auto c : host)
    {
        if (mpp[c] > 0)
        {
            mpp[c]--;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    for (auto it : mpp)
    {
        if (it.second > 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
