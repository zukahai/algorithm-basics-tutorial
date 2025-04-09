#include <bits/stdc++.h>

using namespace std;
long long mod = 1000000007;

unordered_map <long long, long long> cache;


long long fibo(long long n) {
    if (n == 1 || n == 2)
        return 1;
    if (cache.find(n) != cache.end())
        return cache[n];
    long long k = n / 2;
    if (n % 2 == 0) {
        cache[n] = (fibo(k) * (fibo(k - 1) + fibo(k + 1))) % mod;
        return cache[n];
    } else {
        cache[n] = (fibo(k) * fibo(k) +  fibo(k + 1) * fibo(k + 1)) % mod ;
        return cache[n];
    }
}

int main() {
    // Nhập xuất nhanh
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // Đọc file
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif

    // Chương trình chính
    long long n;
    cin >> n;
    cout << fibo(n);
}