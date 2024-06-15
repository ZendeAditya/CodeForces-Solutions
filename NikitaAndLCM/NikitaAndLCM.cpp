#include <bits/stdc++.h>
using namespace std;

// Function to compute LCM of two numbers
long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_set<long long> elements;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            elements.insert(a[i]);
        }
        long long totalLCM = a[0];
        for (int i = 1; i < n; i++) {
            totalLCM = lcm(totalLCM, a[i]);
            if (totalLCM > 1e9) break; 
        }
        
        if (elements.count(totalLCM)) {
            int maxLength = 0;
            for (int mask = 1; mask < (1 << n); mask++) {
                long long currentLCM = 1;
                bool valid = true;
                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        currentLCM = lcm(currentLCM, a[i]);
                        if (currentLCM > 1e9) {
                            valid = false; 
                            break;
                        }
                    }
                }
                if (valid && !elements.count(currentLCM)) {
                    maxLength = max(maxLength, __builtin_popcount(mask));
                }
            }
            cout << maxLength << "\n";
        } else {
            
            cout << n << "\n";
        }
    }
    
    return 0;
}
