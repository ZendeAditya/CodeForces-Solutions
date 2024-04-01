#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    vector<int> round_numbers;

    while (t--)
    {
        int n;
        cin >> n;
        int position = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                round_numbers.push_back(digit * position);
            }
            n /= 10;
            position *= 10;
        }
        cout << round_numbers.size() << endl;
        for (int num : round_numbers)
        {
            cout << num << " ";
        }
        cout << endl;
        round_numbers.clear();
    }
    return 0;
}
