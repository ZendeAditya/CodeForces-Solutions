#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // Create a string with the first k lowercase English alphabets
        string s;
        for (int i = 0; i < k; ++i)
        {
            s += 'a' + i;
        }

        // Repeat the string until it reaches the required length n
        while (s.length() < n)
        {
            s += s;
        }

        // Print the first n characters of the repeated string
        cout << s.substr(0, n) << endl;
    }

    return 0;
}
