#include <bits/stdc++.h>
using namespace std;

#define m 1000000007

long long solve(long long a, long long b)
{
    a %= m;
    if (b == 0)
        return 1;
    long long res = 1;

    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res = (res * a) % m;
            b--;
        }
        else
        {
            a = (a * a) % m;
            b /= 2;
        }
    }

    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << 0 << endl;
        }
        else
        {
            long long length = b - a + 1;
            long long sum = a + b;
            // i
            cout << (((length % m) * (sum % m)) % m * (solve(2, m - 2) % m)) % m << endl;
        }
    }
}
