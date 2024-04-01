#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    getline(cin, input);
    set<char> distinctLetters;
    for (char c : input)
    {
        if (islower(c))
        {
            distinctLetters.insert(c);
        }
    }
    cout << distinctLetters.size() << endl;
    return 0;
}
