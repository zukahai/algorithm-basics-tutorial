/*
https://codeforces.com/contest/1430/problem/E
*/
#include <bits/stdc++.h>

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

int n;
string s;
string revS;
vector<int> posS[30];
vector<int> posT[30];
int cnt[30];
int t[N];

inline int sum (int r) {
	int result = 0;
	for (; r >= 0; r = (r & (r+1)) - 1)
		result += t[r];
	return result;
}

inline void inc (int i, int d) {
	for (; i < n; i = (i | (i+1)))
		t[i] += d;
}

int sum (int l, int r) {
	return sum (r) - sum (l-1);
}
     
inline void read() {	
	cin >> n >> s;
}

inline void solve() {
	revS = s;
	reverse(all(revS));
	for (int i = 0; i < sz(s); i++) {
		posS[s[i] - 'a'].pb(i);
		posT[revS[i] - 'a'].pb(i);
	}
	li ans = 0;
	for (int i = 0; i < sz(revS); i++) {
		int let = revS[i] - 'a';
		int cur = posS[let][cnt[let]];
		int oldC = cur;
		cur += sum(cur, n - 1);
		int need = i;
		ans += cur - need;
		inc(oldC, 1);
		cnt[let]++;
	}
	cout << ans << endl;
}

int main () {
#ifdef fcspartakm
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    srand(time(NULL));
    cerr << setprecision(10) << fixed;
    
    read();
    solve();
 
    //cerr << "TIME: " << clock() << endl;
}