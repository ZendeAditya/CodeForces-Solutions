#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int limak, bob;
    cin >> limak >> bob;
    int years = 0;
    while (bob >= limak)
    {
        limak = limak * 3;
        bob = bob * 2;
        years++;
    }
    cout << years << endl;
    return 0;
}
