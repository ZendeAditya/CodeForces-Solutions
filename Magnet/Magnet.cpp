#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<string> magnets;
    int count = 1;
    while (n--)
    {
        string m;
        cin >> m;
        magnets.push_back(m);
    }
    for (int i = 0; i < magnets.size() - 1; i++)
    {
        if (magnets[i] != magnets[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
