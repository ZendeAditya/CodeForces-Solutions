#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, m;
        cin >> a >> b >> m;
        long long lcm_ab = lcm(a, b);

        long long max_fireworks = m / lcm_ab + 1;

        cout << max_fireworks << "\n";
    }

    return 0;
}
