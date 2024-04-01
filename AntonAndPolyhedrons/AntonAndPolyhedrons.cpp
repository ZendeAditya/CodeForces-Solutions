#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    unordered_map<string, int> poly = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};

    int count = 0;
    while (n--)
    {
        string s;
        cin >> s;
        for (auto it = poly.begin(); it != poly.end(); ++it)
        {
            const string &key = it->first;
            int value = it->second;
            if (key == s)
            {
                count += value;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}
