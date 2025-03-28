/*
https://codeforces.com/contest/1234/problem/E
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	for (int i = 0; i < m; ++i) {
		cin >> a[i];
		--a[i];
	}
	
	vector<long long> res(n);
	for (int j = 0; j < m - 1; ++j) {
		res[0] += abs(a[j] - a[j + 1]);
	}
	
	vector<int> cnt(n);
	vector<vector<int>> adj(n);
	for (int i = 0; i < m - 1; ++i) {
		int l = a[i], r = a[i + 1];
		if (l != r) {
			adj[l].push_back(r);
			adj[r].push_back(l);
		}
		if (l > r) swap(l, r);
		if (r - l < 2) continue;
		++cnt[l + 1];
		--cnt[r];
	}
	for (int i = 0; i < n - 1; ++i) {
		cnt[i + 1] += cnt[i];
	}
	
	for (int i = 1; i < n; ++i) {
		res[i] = res[0] - cnt[i];
		for (auto j : adj[i]) {
			res[i] -= abs(i - j);
			res[i] += j + (j < i);
		}
	}
	
	for (int i = 0; i < n; ++i) {
		cout << res[i] << " ";
	}
	cout << endl;
	
	return 0;
}