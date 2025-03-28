/*
https://codeforces.com/contest/1436/problem/F
*/
#include <bits/stdc++.h>
 
using namespace std;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define reunique(v) v.resize(std::unique(v.begin(), v.end()) - v.begin())
#define sz(v) ((int)(v).size())
 
#define vec1d(x) vector<x>
#define vec2d(x) vector<vec1d(x)>
#define vec3d(x) vector<vec2d(x)>
#define vec4d(x) vector<vec3d(x)>
 
#define ivec1d(x, n, v) vec1d(x)(n, v)
#define ivec2d(x, n, m, v) vec2d(x)(n, ivec1d(x, m, v))
#define ivec3d(x, n, m, k, v) vec3d(x)(n, ivec2d(x, m, k, v))
#define ivec4d(x, n, m, k, l, v) vec4d(x)(n, ivec3d(x, m, k, l, v))
 
#ifdef LOCAL
#include "pretty_print.h"
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define dbg(...) 42
#endif
 
#define nl "\n"
 
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
 
template <typename T> T sqr(T x) { return x * x; }
template <typename T> T abs(T x) { return x < 0? -x : x; }
template <typename T> T gcd(T a, T b) { return b? gcd(b, a % b) : a; }
template <typename T> bool chmin(T &x, const T& y) { if (x > y) { x = y; return true; } return false; }
template <typename T> bool chmax(T &x, const T& y) { if (x < y) { x = y; return true; } return false; }
 
auto random_address = [] { char *p = new char; delete p; return (uint64_t) p; };
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1));
mt19937_64 rngll(chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1));
 
 
const int MOD = 998244353;
 
void addmod(ll &x, ll d) {
    x += d;
    if (x >= MOD) {
        x -= MOD;
    }
    if (x < 0) {
        x += MOD;
    }
}
 
ll powmod(ll a, ll b) {
    ll ret = 1;
    ll p = a;
    while (b) {
        if (b & 1) {
            ret = ret * p % MOD;
        }
        p = p * p % MOD;
        b >>= 1;
    }
    return ret;
}
 
ll divmod(ll a, ll b) {
    return a * powmod(b, MOD - 2) % MOD;
}
 
int main(int /* argc */, char** /* argv */)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    assert(freopen("i.txt", "r", stdin));
    assert(freopen("o.txt", "w", stdout));
#endif
 
    int m;
    cin >> m;
 
    const int n = 1e+5;
 
    vector<ll> sum(n + 1, 0);
    vector<ll> sum1(n + 1, 0);
    vector<ll> sum2(n + 1, 0);
    vector<ll> cnt(n + 1, 0);
 
 
    for (int i = 0; i < m; ++i) {
        ll x, f;
        cin >> x >> f;
        ll s = x * f % MOD;
        ll s1 = x * x % MOD * f % MOD;
        ll s2 = x * x % MOD * ((f - 1) * f % MOD) % MOD;
 
        auto add = [&](int i) {
            addmod(sum2[i], (s2 + 2 * s * sum[i]) % MOD);
            addmod(sum1[i], s1);
            addmod(sum[i], s);
            cnt[i] += f;
        };
 
        for (int j = 1; j * j <= x; ++j) {
            if (x % j) {
                continue;
            }
            add(j);
            if (x / j != j) {
                add(x / j);
            }
        }
    }
 
    vector<ll> f(n + 1, 0);
    for (int i = n; i >= 1; --i) {
        if (!cnt[i]) {
            continue;
        }
        ll& ret = f[i];
        ll k = cnt[i];
        ll p3, p2;
        p3 = p2 = 0;
        if (k > 2) {
            p3 = powmod(2, k - 3);
            p2 = p3 * 2 % MOD;
        } else if (k > 1) {
            p2 = powmod(2, k - 2);
        }
 
        if (k > 1) {
            addmod(ret, p2 * ((k - 1) % MOD) % MOD * sum1[i] % MOD);
            addmod(ret, p2 % MOD * sum2[i] % MOD);
        }
        if (k > 2) {
            addmod(ret, p3 * ((k - 2) % MOD) % MOD * sum2[i] % MOD);
        }
 
        for (int j = i + i; j <= n; j += i) {
            addmod(ret, -f[j]);
        }
    }
 
    cout << f[1] << nl;
 
#ifdef LOCAL
    cerr << "Time execute: " << clock() / (double)CLOCKS_PER_SEC << " sec" << endl;
#endif
    return 0;
}