#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, a[10000];
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    k--;

    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k] && a[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
