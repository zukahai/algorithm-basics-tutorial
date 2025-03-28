/*
https://codeforces.com/contest/1453/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
 
const int MAX_N = 100;
 
void solve()
{
	int n, m, i, j;
	cin >> n >> m;
	int a[MAX_N + 5], b[MAX_N + 5];
	int ans = 0;
 
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < m; i++)
		cin >> b[i];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i] == b[j])
				ans++;
 
	cout << ans << '\n';
}
 
int main()
{
	int t;
	cin >> t;
 
	while (t--)
		solve();
}