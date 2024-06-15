#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results(t);
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int maxSum = 0;
        int bestX = 2;

        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int sum = x * (k * (k + 1)) / 2;

            if (sum > maxSum) {
                maxSum = sum;
                bestX = x;
            }
        }

        results[i] = bestX;
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
