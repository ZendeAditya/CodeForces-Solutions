#include <bits/stdc++.h>

using namespace std;

int main()
{
    string tableCard;
    cin >> tableCard;
    vector<string> cards(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> cards[i];
    }
    bool canPlay = false;
    for (int i = 0; i < 5; i++)
    {
        if (cards[i][0] == tableCard[0] || cards[i][1] == tableCard[1])
        {
            canPlay = true;
            break;
        }
    }

    if (canPlay)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}