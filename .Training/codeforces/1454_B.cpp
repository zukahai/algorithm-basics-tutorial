/*
https://codeforces.com/contest/1454/problem/B
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
		vector<int> cnt(n + 1), idx(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			++cnt[x];
			idx[x] = i + 1;
		}
		int ans = -1;
		for (int i = 0; i <= n; ++i) {
			if (cnt[i] == 1) {
				ans = idx[i];
				break;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}