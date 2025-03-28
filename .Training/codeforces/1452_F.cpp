/*
https://codeforces.com/contest/1452/problem/F
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

int n, q;
vector<li> cnt;

inline bool read() {
	if(!(cin >> n >> q))
		return false;
	cnt.assign(n, 0);
	fore (i, 0, n)
		cin >> cnt[i];
	return true;
}

inline void solve() {
	fore (qs, 0, q) {
		int tp, pos;
		li val;
		cin >> tp >> pos >> val;
		if (tp == 1) {
			cnt[pos] = val;
		} else {
			li small = 0, cur = 0;
			fore (i, 0, pos + 1) {
				small += cnt[i] * ((1ll << i) - 1);
				val -= cnt[i];
			}
			if (val <= 0) {
				cout << 0 << '\n';
				continue;
			}
			
			int id = pos + 1;
			while (id < n) {
				li add = 1ll << (id - pos);
				li need = min(val / add, cnt[id]);
				cur += need * (add - 1);
				val -= need * add;
				small += need * add * ((1ll << pos) - 1);
				
				if (need == cnt[id])
					id++;
				else
					break;
			}
			if (val <= 0) {
				cout << cur << '\n';
				continue;
			}
			if (id >= n) {
				cout << (val > small ? -1 : cur + val) << '\n';
				continue;
			}
			
			li ans = INF64;
			while (id > pos) {
				if (small >= val)
					ans = min(ans, cur + val);
				cur++;
				id--;
				li add = 1ll << (id - pos);
				if (val >= add) {
					cur += add - 1;
					val -= add;
					small += add * ((1ll << pos) - 1);
				}
			}
			assert(val <= 0);
			cout << min(ans, cur) << endl;
		}
	}
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cout << fixed << setprecision(15);
	
	if(read()) {
		solve();
		
#ifdef _DEBUG
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
#endif
	}
	return 0;
}