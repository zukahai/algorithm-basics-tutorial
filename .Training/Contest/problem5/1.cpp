#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long x = abs(m - n);
    n = min(m, n);

    long long a = n;
    long long b = n + 1;
    long long c = 2 * n + 1 + 3 * x;

    if (a % 2 == 0)
        a /= 2;
    else if (b % 2 == 0)
        b /= 2;
    else
        c /= 2;

    if (a % 3 == 0)
        a /= 3;
    else if (b % 3 == 0)
        b /= 3;
    else
        c /= 3;

    long long res = a % mod;
    res  = (res * (b % mod)) % mod;
    res  = (res * (c % mod)) % mod;

    cout << res << endl;
    
    
}