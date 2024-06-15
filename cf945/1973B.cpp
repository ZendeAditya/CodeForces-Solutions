#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int current_or = v[0];
        int max_or = current_or;
        int k = 1;

        for (int i = 1; i < n; i++) {
            current_or |= v[i];
            if (current_or != max_or) {
                max_or = current_or;
                k = i + 1;
            }
        }

        cout << k << '\n';
    }

    return 0;
}
