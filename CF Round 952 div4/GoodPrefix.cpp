#include <bits/stdc++.h>
using namespace std;
bool isGoodSubarray(vector<int> &array)
{
    sort(array.begin(), array.end());
    int maxEle = *max_element(array.begin(), array.end());
    for(int i = 0; i < array.size()-1;i++){
        maxEle +=
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<int>> subarrays;
        int count = 0;
        for (int i = 0; i < 1; i++)
        {
            for (int j = i; j < n; j++)
            {
                vector<int> subarray;
                for (int k = i; k <= j; k++)
                {
                    subarray.push_back(arr[k]);
                }
                subarrays.push_back(subarray);
                if (isGoodSubarray(subarray))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
