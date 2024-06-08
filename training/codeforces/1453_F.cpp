/*
https://codeforces.com/contest/1453/problem/F
*/
#include <bits/stdc++.h>
using namespace std;
 
const int MAX_N = 3000;
const int inf = MAX_N;
 
int a[MAX_N + 5], dp[MAX_N + 5][MAX_N + 5];
 
void solve()
{
	int i, j, n;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
 
	for (i = 2; i <= n; i++)
	{
		int cnt = 0;
		for (j = i; j <= n; j++)
			dp[i][j] = inf;
		for (j = i - 1; j >= 1; j--)
			if (j + a[j] >= i)
				dp[i][j + a[j]] = min(dp[i][j + a[j]], dp[j][i - 1] + cnt++);
		for (j = i + 1; j <= n; j++)
			dp[i][j] = min(dp[i][j], dp[i][j - 1]);
	}
 
	cout << dp[n][n] << '\n';
}
 
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}