/*
https://codeforces.com/contest/1452/problem/E
*/
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

struct seg{
	int l, r;
};

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<seg> a(m);
	forn(i, m){
		cin >> a[i].l >> a[i].r;
		--a[i].l;
	}
	sort(a.begin(), a.end(), [](const seg &a, const seg &b){
		return a.l + a.r < b.l + b.r;
	});
	vector<int> su(m + 1);
	forn(i, n - k + 1){
		int cur = 0;
		for (int j = m - 1; j >= 0; --j){
			cur += max(0, min(i + k, a[j].r) - max(i, a[j].l));
			su[j] = max(su[j], cur);
		}
	}
	int ans = su[0];
	forn(i, n - k + 1){
		int cur = 0;
		forn(j, m){
			cur += max(0, min(i + k, a[j].r) - max(i, a[j].l));
			ans = max(ans, cur + su[j + 1]);
		}
	}
	cout << ans << endl;
	return 0;
}