/*
https://codeforces.com/contest/1453/problem/D
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const int MAX_N = 2000;
int a[MAX_N + 5];
 
void solve()
{
	ll k;
	cin >> k;
	
	if (k & 1)
	{
		cout << "-1\n";
		return;
	}
 
	memset(a, 0, sizeof a);
	a[1] = 1;
	int cur = 1;
	while (k)
	{
		int c;
		for (c = 1; (1ll << (c + 1)) - 2 <= k; c++);
		cur += c - 1;
		a[cur] = 1;
		k -= (1ll << c) - 2;
	}
	cout << cur - 1 << '\n';
	for (int i = 1; i < cur; i++)
		cout << a[i] << (i == cur - 1 ? '\n' : ' ');
}
 
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}