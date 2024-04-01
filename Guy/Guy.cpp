#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<bool> levelsPassed(n, false);

    int p;
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        int level;
        cin >> level;
        levelsPassed[level - 1] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int level;
        cin >> level;
        levelsPassed[level - 1] = true;
    }

    bool passedAllLevels = all_of(levelsPassed.begin(), levelsPassed.end(), [](bool passed)
                                  { return passed; });

    if (passedAllLevels)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
