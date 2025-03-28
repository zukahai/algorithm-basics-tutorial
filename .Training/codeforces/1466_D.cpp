/*
https://codeforces.com/contest/1466/problem/D
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

const int N = 100 * 1000 + 7;

int n;
int w[N];
int deg[N];

void solve() {
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i) {
		scanf("%d", &w[i]);
		deg[i] = 0;
	}
	
	for(int i = 1; i < n; ++i) {
		int u, v;
		scanf("%d %d", &u, &v);
		deg[u]++; deg[v]++;
	}
	
	LL ans = 0;
	vector <int> to_sort;

	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j < deg[i]; ++j)
			to_sort.push_back(w[i]);
		ans += w[i];
	}
	
	sort(to_sort.begin(), to_sort.end());
	reverse(to_sort.begin(), to_sort.end());
	
	for(auto &v: to_sort) {
		printf("%lld ", ans);
		ans += v;
	}
	
	printf("%lld\n", ans);
}

int main() {
	int cases;
	scanf("%d", &cases);
	
	while(cases--)
		solve();
	return 0;
}