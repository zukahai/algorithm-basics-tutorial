/*
https://codeforces.com/contest/1479/problem/B2
*/
#include <bits/stdc++.h>
 
using namespace std;
 
const int MAXN = 100010;
const int INF = 1000000000;
 
int n, m;
int a[MAXN];
int f[MAXN], last[MAXN];
 
void solve()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
 
	// Initially, every color does not have its last occurrence.
	for (int i = 1; i <= n; ++i) last[i] = -1;
 
	// eliminate adjacent elements with the same value.
	for (int i = 1; i <= n; ++i)
		if (i == 1 || a[i] != a[i - 1]) a[++m] = a[i];
 
	// DP
	int res = m;
	f[1] = 1;
	last[a[1]] = 1;
	for (int i = 2; i <= m; ++i)
	{
		auto g = [&](int j)
		{
			if (j == 0) return INF;
			return f[j] + (i - j - 1) + (a[j - 1] != a[i]);
		};
		int candidate = last[a[i]] + 1;
		f[i] = min(g(i - 1), g(candidate));
		res = min(res, f[i] + m - i);
		last[a[i]] = i;
	}
 
	printf("%d\n", res);
}
 
int main()
{
	solve();
	return 0;
}