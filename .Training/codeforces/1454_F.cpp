/*
https://codeforces.com/contest/1454/problem/F
*/
#include <bits/stdc++.h>

using namespace std;

bool found;

void shift(multiset<int> &l, multiset<int> &r, int val) {
	l.erase(l.find(val));
	r.insert(val);
}

void check(const multiset<int> &lf, const multiset<int> &mid, const multiset<int> &rg) {
	if (found || lf.empty() || mid.empty() || rg.empty()) {
		return;
	}
	if (*lf.rbegin() == *mid.begin() && *mid.begin() == *rg.rbegin()) {
		found = true;
		cout << "YES" << endl;
		cout << lf.size() << " " << mid.size() << " " << rg.size() << endl;
	}
}

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
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		
		found = false;
		multiset<int> lf, mid(a.begin(), a.end()), rg;
		int r = n - 1;
		for (int l = 0; l < n - 2; ++l) {
			shift(mid, lf, a[l]);
			while (r - 1 >= l && a[r] <= *lf.rbegin()) {
				shift(mid, rg, a[r]);
				--r;
			}
			
			while (r - 1 < l) {
				shift(rg, mid, a[r + 1]);
				++r;
			}
			
			check(lf, mid, rg);
			
			shift(lf, mid, a[l]);
			check(lf, mid, rg);
			shift(mid, lf, a[l]);
			
			if (rg.empty()) continue;
			
			shift(rg, mid, a[r + 1]);
			check(lf, mid, rg);
			shift(mid, rg, a[r + 1]);
		}
		if (!found) {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}