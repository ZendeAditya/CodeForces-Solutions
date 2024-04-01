#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> heights[i];
    }

    int swaps = 0;
    for (int i = 1; i < n; ++i)
    {
        if (heights[i] < heights[i - 1])
        {
            swaps += heights[i - 1] - heights[i];
            heights[i] = heights[i - 1]; // Bring the current soldier to the correct position
        }
    }

    cout << swaps << endl;

    return 0;
}
