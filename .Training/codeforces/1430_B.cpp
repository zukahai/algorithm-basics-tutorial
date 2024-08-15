/*
https://codeforces.com/contest/1430/problem/B
*/
#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <string>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <algorithm>
#include <set>
#include <map>
#include <ctime>
#include <cmath>

#define forn(i, n) for(int i=0;i<n;++i)
#define fore(i, l, r) for(int i = int(l); i <= int(r); ++i)
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define x first
#define y1 ________y1
#define y second
#define ft first
#define sc second
#define pt pair<int, int>

template<typename X> inline X abs(const X& a) { return a < 0? -a: a; }
template<typename X> inline X sqr(const X& a) { return a * a; }

typedef long long li;
typedef long double ld;

using namespace std;

const int INF = 1000 * 1000 * 1000;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);
const int N = 200 * 1000 + 13;

int n, k;
int a[N];

inline void read() {	
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
}

inline void solve() {
	sort(a, a + n);
	reverse(a, a + n);
	li ans = 0;
	for (int i = 0; i <= k; i++) {
		ans += a[i];
	}
	cout << ans << endl;
}

int main () {
#ifdef fcspartakm
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    cerr << setprecision(10) << fixed;
    
    int t; cin >> t;
    while(t--) {
    	read();
    	solve();
 	}
    //cerr << "TIME: " << clock() << endl;
}