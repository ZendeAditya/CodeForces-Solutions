#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k * l;
    drink = drink / nl;
    int lime = c * d;
    int salt = p / np;
    int num = min(min(drink, lime), salt) / n;
    cout << num << endl;
    return 0;
}