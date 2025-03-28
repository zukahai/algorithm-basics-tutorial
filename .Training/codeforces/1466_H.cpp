/*
https://codeforces.com/contest/1466/problem/H
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

#define st first
#define nd second
#define PII pair <int, int>

const int N = 60;
const int MX = 1e9 + 7;

struct state {
	int sum_picked = 0;
	int last_picked = 0, cur_picked = 0;
	int iterator = 0;
	vector <PII> lengths;
	
	state(vector <PII> _lengths) {
		lengths = _lengths;
	}
	
	/* operators for map comparisons */
	bool operator<(const state &s) const {
		if(lengths != s.lengths)			return lengths < s.lengths;
		if(last_picked != s.last_picked)	return last_picked < s.last_picked;
		if(cur_picked != s.cur_picked)		return cur_picked < s.cur_picked;
		return iterator < s.iterator;
	}
	
	bool operator==(const state &s) const {
		if(last_picked != s.last_picked)	return false;
		if(cur_picked != s.cur_picked)		return false;
		if(iterator != s.iterator)			return false;
		if(lengths != s.lengths)			return false;
		return true;
	}
};

int n;
vector <PII> cycles;
map <state, int> dp;

int sil[N], rv[N];
int pre[N][N][N];

int fast(int a, int b) {
	int ret = 1;
	while(b) {
		if(b & 1)
			ret = 1LL * ret * a % MX;
		
		b >>= 1;
		a = 1LL * a * a % MX;
	}
	
	return ret;
}

int newt(int a, int b) {
	if(b < 0 || a < b)
		return 0;
	return 1LL * sil[a] * rv[b] % MX * rv[a - b] % MX;
}

PII get_ways(int a, int b) {
	if(a == 0 && b == 0)
		return {sil[n - 1], 0};

	int ret = 0, ret2 = 0;
	int c = n - a - 1;
	
	for(int t = 1; t + c <= n; ++t) {
		ret = (ret + 1LL * newt(n - t, c) * sil[c] % MX * newt(n - c - 1, b) % MX * sil[b] % MX * sil[a - b]) % MX;
		ret2 = (ret2 + 1LL * newt(n - t, c) * sil[c] % MX * newt(n - t - c, b) % MX * sil[b] % MX * sil[a - b]) % MX;
	}

	return {ret, ret2};
}

void precalc() {
	sil[0] = 1;
	for(int i = 1; i <= n; ++i)
		sil[i] = 1LL * sil[i - 1] * i % MX;
	
	rv[n] = fast(sil[n], MX - 2);
	for(int i = n; i >= 1; --i)
		rv[i - 1] = 1LL * rv[i] * i % MX;
	
	for(int i = 0; i < n; ++i)
		for(int j = 0; j <= i; ++j) {
			if(i && j == 0)
				continue;
			
			auto [val, val2] = get_ways(i, j);
			pre[i][j][0] = 1;

			int res = 1, res2 = 1;
			for(int k = 1; k <= n; ++k) {
				res = 1LL * res * val % MX;
				res2 = 1LL * res2 * val2 % MX;
				pre[i][j][k] = (res + MX - res2) % MX;
			}
		}
}

void read() {
	scanf("%d", &n);
	precalc();

	vector <int> input(n);
	for(auto &v: input) {
		scanf("%d", &v);
		v--;
	}
	
	vector <bool> vis(n);
	vector <int> cycle_lengths;

	for(int i = 0; i < n; ++i) {
		if(vis[i])
			continue;
		
		int cur = i;
		int cycle_length = 0;
		
		while(!vis[cur]) {
			++cycle_length;
			vis[cur] = true;
			cur = input[cur];
		}
		
		cycle_lengths.push_back(cycle_length);
	}
	
	sort(cycle_lengths.begin(), cycle_lengths.end());
	for(auto v: cycle_lengths) {
		if(cycles.size() && cycles.back().st == v)
			cycles.back().nd++;
		else
			cycles.push_back({v, 1});
	}
}

int solve(state &cur) {
	if(cur.sum_picked == n)
		return 1;
	
	if(dp.count(cur))
		return dp[cur];
	
	if(cur.iterator == (int)cur.lengths.size()) {
		if(cur.cur_picked == 0)
			return dp[cur] = 0;
		
		state nxt = cur;
		nxt.sum_picked += nxt.cur_picked;
		nxt.last_picked = nxt.cur_picked;
		nxt.cur_picked = 0;
		nxt.iterator = 0;
		return dp[cur] = solve(nxt);
	}
	
	state nxt = cur;
	nxt.iterator++;
	
	int ret = 0, tmp = 1;
	auto [length, count] = cur.lengths[cur.iterator];

	for(int i = 0; i <= count; ++i) {
		nxt.cur_picked = cur.cur_picked + i * length;
		nxt.lengths[cur.iterator].nd = count - i;
		ret = (ret + 1LL * solve(nxt) * tmp % MX * newt(count, i)) % MX;
		tmp = 1LL * tmp * pre[cur.sum_picked][cur.last_picked][length] % MX;
	}
	
	return dp[cur] = ret;
}

int main() {
	read();
	state start = state(cycles);
	int ans = solve(start);
	printf("%d\n", ans);
	return 0;
}