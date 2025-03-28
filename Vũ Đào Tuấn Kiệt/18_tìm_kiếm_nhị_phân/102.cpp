#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, k;
	cin >> m >> n >> k;
	vector<int> t(m), p(m);
	for (int i = 0; i < m; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	long long l = 0, r = 1e18;
	long long ans = 0;
	while (l <= r) {
		long long T = (l + r) / 2;
		vector<long long> a(m);
		for (int i = 0; i < m; i++) {
			a[i] = (T - t[i]) / p[i] + 1;
		}
		sort(a.begin(), a.end(), greater<long long>());
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		if (sum >= k) {
			ans = T;
			r = T - 1;
		} else {
			l = T + 1;
		}
	}
	cout << ans << endl;
	return 0;
}