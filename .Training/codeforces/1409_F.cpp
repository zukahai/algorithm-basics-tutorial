/*
https://codeforces.com/contest/1409/problem/F
*/
#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, k;
	string s, t;
	cin >> n >> k >> s >> t;
	vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(n + 1, vector<int>(n + 1, -INF)));
	dp[0][0][0] = 0;
	for (int i = 0; i < n; ++i) {
		for (int ck = 0; ck <= k; ++ck) {
			for (int cnt0 = 0; cnt0 <= n; ++cnt0) {
				if (dp[i][ck][cnt0] == -INF) continue;
				int e0 = s[i] == t[0];
				int e1 = s[i] == t[1];
				int e01 = t[0] == t[1];
				
				dp[i + 1][ck][cnt0 + e0] = max(dp[i + 1][ck][cnt0 + e0], dp[i][ck][cnt0] + (e1 ? cnt0 : 0));
				
				if (ck < k) {
					dp[i + 1][ck + 1][cnt0 + 1] = max(dp[i + 1][ck + 1][cnt0 + 1], dp[i][ck][cnt0] + (e01 ? cnt0 : 0));
					dp[i + 1][ck + 1][cnt0 + e01] = max(dp[i + 1][ck + 1][cnt0 + e01], dp[i][ck][cnt0] + cnt0);
				}
			}
		}
	}
	
	int ans = 0;
	for (int ck = 0; ck <= k; ++ck) {
		for (int cnt0 = 0; cnt0 <= n; ++cnt0) {
			ans = max(ans, dp[n][ck][cnt0]);
		}
	}
	
	cout << ans << endl;
	
	return 0;
}