/*
https://codeforces.com/contest/1426/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 1e9;
		for (int x = 1; x * x <= n; ++x) {
			ans = min(ans, x - 1 + ((n - x) + x - 1) / x);
		}
		cout << ans << endl;
	}
	
	return 0;
}