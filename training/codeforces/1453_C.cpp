/*
https://codeforces.com/contest/1453/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
 
const int MAX_N = 2000;
const int inf = MAX_N + 9;
 
char a[MAX_N + 5][MAX_N + 5];
 
void solve(int n, int ans[])
{
	int i, j;
	int mnr[10], mxr[10] = { 0 }, mnc[10], mxc[10] = { 0 };
	fill(mnr, mnr + 10, inf);
	fill(mnc, mnc + 10, inf);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			int x = a[i][j] - '0';
			mnr[x] = min(mnr[x], i), mxr[x] = max(mxr[x], i);
			mnc[x] = min(mnc[x], j), mxc[x] = max(mxc[x], j);
		}
	}
 
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			int x = a[i][j] - '0';
			ans[x] = max(ans[x], max(mxr[x] - i, i - mnr[x]) * max(n - j, j - 1));
			ans[x] = max(ans[x], max(mxc[x] - j, j - mnc[x]) * max(n - i, i - 1));
		}
	}
}
 
int main()
{
	int t;
	cin >> t;
 
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i] + 1;
		int ans[10] = { 0 };
		solve(n, ans);
		for (int i = 0; i < 10; i++)
			cout << ans[i] << (i == 9 ? '\n' : ' ');
	}
}