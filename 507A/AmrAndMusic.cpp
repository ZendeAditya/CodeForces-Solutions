#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> instruments;
    for(int i = 0; i < n; i++) {
        int days;
        cin >> days;
        instruments.push_back({days, i + 1});
    }
    sort(instruments.begin(), instruments.end());

    vector<int> learned_instruments;
    int days_used = 0;
    for(auto instrument : instruments) {
        if(days_used + instrument.first <= k) {
            learned_instruments.push_back(instrument.second);
            days_used += instrument.first;
        } else {
            break;
        }
    }
    cout << learned_instruments.size() << endl;
    for(int i = 0; i < learned_instruments.size(); i++) {
        cout << learned_instruments[i] << " ";
    }
    cout << endl;

    return 0;
}
