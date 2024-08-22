#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long n1 = n + 1;

    if (n % 2 == 0)
        n /= 2;
    else
        n1 /= 2;

    cout << (n % mod) * (n1 % mod) % mod;

}

// 6 * 7 / 2