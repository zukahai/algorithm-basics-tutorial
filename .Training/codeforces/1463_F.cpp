/*
https://codeforces.com/contest/1463/problem/F
*/
#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int N = 22;

int dp[2][1 << N];
int val[2 * N];

int main() {
	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);
	
	int k = x + y;
	int m = max(x, y);
	int FULL = (1 << m) - 1;
	
	for (int i = 0; i < k; ++i)
		val[i] = n / k + (i < n % k);
	for (int mask = 0; mask < (1 << m); ++mask)
		dp[0][mask] = -INF;
	dp[0][0] = 0;
	
	for (int i = 0; i < k; ++i) {
		for (int mask = 0; mask < (1 << m); ++mask)
			dp[1][mask] = -INF;
		for (int mask = 0; mask < (1 << m); ++mask) {
			if (dp[0][mask] == -INF)
				continue;
			int nmask = (mask << 1) & FULL;
			dp[1][nmask] = max(dp[1][nmask], dp[0][mask]);
			if (((mask >> (x - 1)) & 1) | ((mask >> (y - 1)) & 1))
				continue;
			nmask |= 1;
			dp[1][nmask] = max(dp[1][nmask], dp[0][mask] + val[i]);
		}
		swap(dp[0], dp[1]);
	}
	
	int ans = 0;
	for (int mask = 0; mask < (1 << m); ++mask) 
		ans = max(ans, dp[0][mask]);
	printf("%d\n", ans);
}