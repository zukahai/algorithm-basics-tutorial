#include <bits/stdc++.h>
using namespace std;
const long long inf = 1e18, inf2 = 1e17, N = 55, H = 1005;
long long dp[N][H * N], c[N], h[N], n, k;
long long f(int i, int j)
{
    if (j < 0)
        return inf2;
    if (i == 0)
    {
        if (j != 0)
            return inf2;
        else
            return 0;
    }
    if (dp[i][j] != inf)
        return dp[i][j];
    long long x = f(i - 1, j - h[i]), y = f(i - 1, j);
    dp[i][j] = inf2;
    if (x + c[i] <= k * (i - 1))
        dp[i][j] = x + c[i];
    dp[i][j] = min(dp[i][j], y);
    return dp[i][j];
}
void test()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> c[i] >> h[i];
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += h[i];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= s; j++)
            dp[i][j] = inf;
    dp[0][0] = 0;
    long long ans = 0;
    for (int i = s; i >= 0; i--)
    {
        if (f(n, i) != inf2)
        {
            cout << i << '\n';
            return;
        }
    }
}
int main()
{
    freopen("NOBITA.inp", "r", stdin);
    freopen("NOBITA.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        test();
}