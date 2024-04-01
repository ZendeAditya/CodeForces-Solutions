#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int students, time;
    string arrangement;
    cin >> students >> time;
    cin >> arrangement;
    while (time--)
    {
        for (int i = 0; i < students - 1; ++i)
        {
            if (arrangement[i] == 'B' && arrangement[i + 1] == 'G')
            {
                swap(arrangement[i], arrangement[i + 1]);
                ++i;
            }
        }
    }

    cout << arrangement << endl;
    return 0;
}
