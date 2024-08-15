/*
https://codeforces.com/contest/1469/problem/F
*/
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

const int INF = 1e9;

int n, k, nn;

vector<long long> t, ps;

void push(int v, int l, int r){
	if (l < r - 1){
		ps[v * 2] += ps[v];
		ps[v * 2 + 1] += ps[v];
	}
	t[v] += ps[v] * (r - l);
	ps[v] = 0;
}

void upd(int v, int l, int r, int L, int R, int val){
	push(v, l, r);
	if (L >= R)
		return;
	if (l == L && r == R){
		ps[v] = val;
		push(v, l, r);
		return;
	}
	int m = (l + r) / 2;
	upd(v * 2, l, m, L, min(m, R), val);
	upd(v * 2 + 1, m, r, max(m, L), R, val);
	t[v] = t[v * 2] + t[v * 2 + 1];
}

long long get(int v, int l, int r, int L, int R){
	push(v, l, r);
	if (L >= R)
		return 0;
	if (l == L && r == R)
		return t[v];
	int m = (l + r) / 2;
	long long res = get(v * 2, l, m, L, min(m, R)) + get(v * 2 + 1, m, r, max(m, L), R);
	t[v] = t[v * 2] + t[v * 2 + 1];
	return res;
}

int trav(int v, int l, int r, int cnt){
	push(v, l, r);
	if (l == r - 1)
		return l;
	int m = (l + r) / 2;
	push(v * 2, l, m);
	push(v * 2 + 1, m, r);
	int res = INF;
	if (t[v * 2] >= cnt)
		res = trav(v * 2, l, m, cnt);
	else if (t[v * 2 + 1] >= cnt - t[v * 2])
		res = trav(v * 2 + 1, m, r, cnt - t[v * 2]);
	t[v] = t[v * 2] + t[v * 2 + 1];
	return res;
}

int main() {
	scanf("%d%d", &n, &k);
	vector<int> a(n);
	forn(i, n) scanf("%d", &a[i]);
	sort(a.begin(), a.end(), greater<int>());
	nn = a[0] + 500;
	t.resize(4 * nn);
	ps.resize(4 * nn);
	upd(1, 0, nn, 0, 1, 1);
	int fst = 0;
	int ans = INF;
	forn(i, n){
		while (get(1, 0, nn, 0, fst + 1) == 0) ++fst;
		upd(1, 0, nn, fst, fst + 1, -1);
		upd(1, 0, nn, fst + 2, fst + 2 + (a[i] - 1) / 2, 1);
		upd(1, 0, nn, fst + 2, fst + 2 + a[i] / 2, 1);
		ans = min(ans, trav(1, 0, nn, k));
	}
	printf("%d\n", ans == INF ? -1 : ans);
	return 0;
}