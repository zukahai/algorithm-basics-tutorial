/*
https://codeforces.com/contest/1454/problem/D
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
		long long n;
		cin >> n;
	
		vector<pair<int, long long>> val;
		for (long long i = 2; i * i <= n; ++i) {
			int cnt = 0;
			while (n % i == 0) {
				++cnt;
				n /= i;
			}
			if (cnt > 0) {
				val.push_back({cnt, i});
			}
		}
		if (n > 1) {
			val.push_back({1, n});
		}
	
		sort(val.rbegin(), val.rend());
		vector<long long> ans(val[0].first, val[0].second);
		for (int i = 1; i < int(val.size()); ++i) {
			for (int j = 0; j < val[i].first; ++j) {
				ans.back() *= val[i].second;
			}
		}
	
		cout << ans.size() << endl;
		for (auto it : ans) cout << it << " ";
		cout << endl;
	}
	
	return 0;
}