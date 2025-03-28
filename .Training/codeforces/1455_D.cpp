/*
https://codeforces.com/contest/1455/problem/D
*/
#include<bits/stdc++.h>

using namespace std;

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())

#define x first
#define y second

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

template<class A, class B> ostream& operator <<(ostream& out, const pair<A, B> &p) {
	return out << "(" << p.x << ", " << p.y << ")";
}
template<class A> ostream& operator <<(ostream& out, const vector<A> &v) {
	out << "[";
	fore(i, 0, sz(v)) {
		if(i) out << ", ";
		out << v[i];
	}
	return out << "]";
}

const int INF = int(1e9);
const li INF64 = li(1e18);
const ld EPS = 1e-9;

int n, x;
vector<int> a;

inline bool read() {
	if(!(cin >> n >> x))
		return false;
	a.resize(n);
	fore (i, 0, n)
		cin >> a[i];
	return true;
}

inline void solve() {
	vector<int> sf(n + 1, 0);
	sf[n] = sf[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--) {
		if (a[i] <= a[i + 1])
			sf[i] = sf[i + 1];
	}
	
	int ans = 0;
	int uk = 0;
	while (true) {
		int np = uk;
		while (np < n && a[np] <= x)
			np++;
		fore (i, uk, np) {
			if (i == 0) continue;
			if (a[i - 1] > a[i]) {
				cout << -1 << endl;
				return;
			}
		}
		if (sf[np])
			break;
		
		assert(a[np] > x);
		swap(a[np], x);
		ans++;
		uk = np;
	}
	cout << ans << endl;
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