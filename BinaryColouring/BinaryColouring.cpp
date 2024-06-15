#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve(int x) {
    vector<int> result;
    while (x != 0) {
        int rem = x % 4;
        if (rem == 0) {
            result.push_back(0);
        } else if (rem == 1) {
            result.push_back(1);
            x -= 1;
        } else if (rem == 2) {
            result.push_back(-1);
            x += 2;
        } else if (rem == 3) {
            result.push_back(-1);
            x += 1;
        }
        x /= 2;
    }

    // Ensure no two consecutive non-zero elements
    for (int i = 0; i < result.size() - 1; ++i) {
        if (result[i] != 0 && result[i + 1] != 0) {
            if (result[i] == 1) {
                result[i] = 0;
                result[i + 1] += 1;
            } else if (result[i] == -1) {
                result[i] = 0;
                result[i + 1] -= 1;
            }
            if (i + 2 == result.size()) {
                result.push_back(0);
            }
        }
    }

    while (!result.empty() && result.back() == 0) {
        result.pop_back();
    }

    cout << result.size() << endl;
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        solve(x);
    }
    
    return 0;
}
