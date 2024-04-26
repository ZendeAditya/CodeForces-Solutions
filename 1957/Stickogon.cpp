#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int len;
            cin >> len;
            ++mp[len];
        }

        int polygons = 0;
        for(auto it = mp.begin(); it != mp.end(); ++it) {
            polygons += it->second/3;
        }

        cout << polygons << endl;
    }

    return 0;
}
