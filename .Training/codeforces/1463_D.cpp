/*
https://codeforces.com/contest/1463/problem/D
*/
#include<bits/stdc++.h>

using namespace std;

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())

const int INF = int(1e9);

int n;
vector<int> b;

inline bool read() {
	if(!(cin >> n))
		return false;
	b.resize(n);
	fore (i, 0, n)
		cin >> b[i];
	return true;
}

bool ok(const vector<int> &a, const vector<int> &b, int cnt) {
	fore (i, 0, cnt) {
		if (a[i] >= b[sz(b) - cnt + i])
			return false;
	}
	return true;
}

inline void solve() {
	vector<int> nb;
	fore (i, 1, 2 * n + 1) {
		if (!binary_search(b.begin(), b.end(), i))
			nb.push_back(i);
	}
	
	int mx[2] = {-1, -1};
	fore (k, 0, 2) {
		int lf = 0, rg = n + 1;
		while (rg - lf > 1) {
			int mid = (lf + rg) / 2;
			if (ok(b, nb, mid))
				lf = mid;
			else
				rg = mid;
		}
		mx[k] = lf;
		if (!ok(nb, b, n - lf)) {
			cout << 0 << endl;
			return;
		}
		swap(b, nb);
	}
	
	assert(n - mx[1] <= mx[0]);
	cout << mx[0] - (n - mx[1]) + 1 << endl;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cout << fixed << setprecision(15);
	
	int t; cin >> t;
	while(t--) {
	    read();
		solve();
		
#ifdef _DEBUG
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
#endif
	}
	return 0;
}