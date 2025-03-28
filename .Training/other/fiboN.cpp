#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

map <long long, long long> f;

long long fibo(long long n) {
    if (f.find(n) != f.end()) {
        return f[n];
    }
    if (n % 2 == 0) {
        f[n] = (fibo(n / 2) * (2 * fibo(n / 2 - 1) + fibo(n / 2))) % mod;
        return f[n];
    } else {
        f[n] = (fibo(n / 2) * fibo(n / 2) + fibo(n / 2 + 1) * fibo(n / 2 + 1)) % mod;
        return f[n];
    }
}

int main() {
    f[1] = 1;
    f[2] = 1;
    long long n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}