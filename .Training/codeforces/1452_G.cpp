/*
https://codeforces.com/contest/1452/problem/G
*/
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int n;
vector<vector<int>> g;

vector<int> h, pcd, d;
vector<vector<int>> st, vals;
vector<int> a;
 
int dfs(int v, int s, int &cd, int p = -1){
	int sum = 1;
	for (int u : g[v]) if (h[u] == -1 && u != p)
		sum += dfs(u, s, cd, v);
	if (cd == -1 && (2 * sum >= s || p == -1))
		cd = v;
	return sum;
}
 
void build(int v, int s, int d, int p = -1){
	int cd = -1;
	dfs(v, s, cd);
	h[cd] = d;
	pcd[cd] = p;
	for (int u : g[cd]) if (h[u] == -1)
		build(u, s / 2, d + 1, cd);
}

vector<char> cur;

void calcd(int v, int p = -1){
	for (int u : g[v]) if (u != p && cur[u]){
		d[u] = d[v] + 1;
		calcd(u, v);
	}
}

vector<vector<int>> dist;

void init(){
	a.resize(n, -1);
	int k;
	scanf("%d", &k);
	queue<int> q;
	forn(i, k){
		int v;
		scanf("%d", &v);
		--v;
		q.push(v);
		a[v] = 0;
	}
	while (!q.empty()){
		int v = q.front();
		q.pop();
		for (int u : g[v]) if (a[u] == -1){
			a[u] = a[v] + 1;
			q.push(u);
		}
	}
	h.resize(n, -1);
	pcd.resize(n);
	build(0, n, 0);
	st.resize(n);
	vector<int> nd(n);
	forn(v, n){
		int u = v;
		while (u != -1){
			st[u].push_back(v);
			if (pcd[u] != -1)
				nd[pcd[u]] = max(nd[pcd[u]], nd[u] + 1);
			u = pcd[u];
		}
	}
	cur.resize(n);
	vals.resize(n);
	dist.resize(n);
	vector<int> ord(n);
	iota(ord.begin(), ord.end(), 0);
	sort(ord.begin(), ord.end(), [&nd](int x, int y){
		return nd[x] < nd[y];
	});
	d.resize(n);
	for (int v : ord){
		for (int u : st[v]) cur[u] = true;
		d[v] = 0;
		calcd(v);
		int mx = 0;
		for (int u : st[v]) mx = max(mx, d[u]);
		vals[v].resize(mx + 1, 0);
		for (int u : st[v]) vals[v][d[u]] = max(vals[v][d[u]], a[u]);
		forn(j, mx) vals[v][j + 1] = max(vals[v][j + 1], vals[v][j]);
		for (int u : st[v]) cur[u] = false;
		for (int u : st[v]) dist[u].push_back(d[u]);
	}
}

bool check(int v, int x){
	for (int i = 0, u = v; u != -1; u = pcd[u], ++i)
		if (x - dist[v][i] >= 0 && vals[u][min(int(vals[u].size()) - 1, x - dist[v][i])] > x)
			return true;
	return false;
}

int main() {
	scanf("%d", &n);
	g.resize(n);
	forn(i, n - 1){
		int v, u;
		scanf("%d%d", &v, &u);
		--v, --u;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	init();
	forn(v, n){
		int res = 0;
		int l = 0, r = n;
		while (l <= r){
			int m = (l + r) / 2;
			if (check(v, m)){
				res = m + 1;
				l = m + 1;
			}
			else{
				r = m - 1;
			}
		}
		printf("%d ", res);
	}
	puts("");
}