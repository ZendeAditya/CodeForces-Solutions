#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, h;
    cin >> n >> h;
    vector<int> heights;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    sort(heights.begin(), heights.end());

    int total_width = 0;
    for (int i = 0; i < n; ++i)
    {
        if (heights[i] > h)
        {
            total_width += 2;
        }
        else
        {
            total_width += 1;
        }
    }

    cout << total_width << endl;

    return 0;
}
