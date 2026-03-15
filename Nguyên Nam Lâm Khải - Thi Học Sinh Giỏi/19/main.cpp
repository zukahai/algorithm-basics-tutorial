#include <bits/stdc++.h>

using namespace std;

const int m = 1000000007;

unordered_map <long long, long long> mp;

long long fibo(long long n) {
    if (mp.find(n) != mp.end()) {
        return mp[n];
    }
    if (n == 1 || n == 2)
        return 1;
    if (n % 2 == 0) {
        long long k = n / 2;
        mp[n] = fibo(k) * (fibo(k - 1) + fibo(k + 1));
        mp[n] %= m;
    } else {
        long long k = (n - 1) / 2;
        mp[n] = fibo(k) * fibo(k) + fibo(k + 1) * fibo(k + 1);
        mp[n] %= m;
    }
    return mp[n];
}

int main() {
    long long n;
    cin >> n;
    cout << fibo(n);
}