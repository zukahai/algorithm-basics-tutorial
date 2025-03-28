/*
https://codeforces.com/contest/1467/problem/D
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5005, mod = 1e9 + 7;
int dp[N][N], cnt[N], a[N], q, n, k;

void pre() {
    for (int i = 0; i < n; i++)
        dp[i][0] = 1;
        
    for (int j = 1; j < N; j++) {
        dp[0][j] = dp[1][j - 1];
        for (int i = 1; i < n - 1; i++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i + 1][j - 1]) % mod;
        dp[n - 1][j] = dp[n - 2][j - 1];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= k; j++)
            cnt[i] += dp[i][j] * dp[i][k - j], cnt[i] %= mod;
    }
}

void solveTestCase() {
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i], ans += a[i] * cnt[i], ans %= mod;
    
    while (q--) {
        int i, x;
        cin >> i >> x;
        i--;
        
        ans -= (a[i] * cnt[i]) % mod, ans += mod, ans %= mod;
        
        a[i] = x;
        ans += (a[i] * cnt[i]), ans %= mod;
        cout << ans << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k >> q;
    pre();
    
    int t = 1;
    //cin >> t;
    while (t--)
        solveTestCase();
}