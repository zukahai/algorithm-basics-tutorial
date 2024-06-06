/*
https://codeforces.com/contest/1417/problem/B
*/
#include <bits/stdc++.h>
#define len(v) ((int)((v).size()))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define chmax(x, v) x = max((x), (v))
#define chmin(x, v) x = min((x), (v))
using namespace std;
using ll = long long;

void solve() {
	int n, tar;
	cin >> n >> tar;
	int curMid = 0;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		int r;
		if (tar % 2 == 0 && x == tar/2)
			r = (curMid++) % 2;
		else if (2*x < tar)
			r = 0;
		else
			r = 1;
		cout << r << " \n"[i==n-1];
	}
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0);

	int nbTests;
	cin >> nbTests;
	for (int iTest = 0; iTest < nbTests; ++iTest) {
		solve();
	}
}