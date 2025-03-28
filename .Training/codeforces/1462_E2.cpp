/*
https://codeforces.com/contest/1462/problem/E2
*/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 300500;
const int mod = 1000000007;
ll fact[N];
ll invFact[N];

ll fast_pow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) % mod;
            p /= 2;
        } else {
            res = (res * a) % mod;
            p--;
        }
    }
    return res;
}

ll C(int n, int k) {
    if (k > n) {
        return 0;
    }
    return fact[n] * invFact[k] % mod * invFact[n - k] % mod;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    for (ll &e : v) {
        cin >> e;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int l = i + 1;
        int r = upper_bound(v.begin(), v.end(), v[i] + k) - v.begin();
        ans = (ans + C(r - l, m - 1)) % mod;
    }
    cout << ans << "\n";
}

int main() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
        invFact[i] = fast_pow(fact[i], mod - 2);
    }
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}