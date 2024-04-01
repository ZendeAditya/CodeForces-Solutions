#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int findNextDistinctYear(int year)
{
    while (true)
    {
        year++;
        string yearStr = to_string(year);
        unordered_set<char> digits;
        bool isDistinct = true;

        for (char digit : yearStr)
        {
            if (digits.find(digit) != digits.end())
            {
                isDistinct = false;
                break;
            }
            digits.insert(digit);
        }

        if (isDistinct)
        {
            return year;
        }
    }
}

int main()
{
    int year;
    cin >> year;

    int nextDistinctYear = findNextDistinctYear(year);

    cout << nextDistinctYear << endl;

    return 0;
}
