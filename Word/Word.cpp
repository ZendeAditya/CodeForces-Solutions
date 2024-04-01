#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int n = s.size();
    int upperCount = 0;
    for (char c : s)
    {
        if (isupper(c))
        {
            upperCount++;
        }
    }
    int lowerCount = n - upperCount;
    if (upperCount > lowerCount)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    return 0;
}
