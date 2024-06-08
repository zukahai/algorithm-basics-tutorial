/*
https://codeforces.com/contest/1455/problem/F
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 505;

int n, k;
string s;
string dp[N];

void solve() {
	cin >> n >> k >> s;
	for (int i = 1; i <= n; i++)
		dp[i] = char('z' + 1);
	for (int i = 0; i < n; i++) {
		int c = s[i] - 'a';
		int nc = min({c, (c + 1) % k, (c + k - 1) % k});
		dp[i + 1] = min(dp[i + 1], dp[i] + char('a' + nc));
		if (i > 0) {
			dp[i + 1] = min(dp[i + 1], dp[i - 1] + char('a' + nc) + s[i - 1]);
			dp[i + 1] = min(dp[i + 1], dp[i].substr(0, i - 1) + s[i] + dp[i].back());
		}
		if (i > 1) {
			dp[i + 1] = min(dp[i + 1], dp[i - 1].substr(0, i - 2) + s[i] + dp[i - 1].back() + s[i - 1]);
		}
	}
	cout << dp[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();
}