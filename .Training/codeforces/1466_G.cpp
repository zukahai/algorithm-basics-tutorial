/*
https://codeforces.com/contest/1466/problem/G
*/
#include <bits/stdc++.h>

using namespace std;

const int MAXLEN = 1e6 + 7;
const int MOD = 1e9 + 7;

int n, q;
string s, t;
vector <string> songs;

vector <int> pw;
vector <int> sum[26];

void read(string &p) {
	static char input[MAXLEN];
	scanf("%s", input);
	p = input;
}

void prepare_songs() {
	songs = {s};
	for(auto c: t) {
		if(songs.back().size() >= MAXLEN)
			break;
		
		auto p = songs.back();
		auto nxt = p + string(1, c) + p;
		songs.push_back(nxt);
	}
}

void prepare_sum() {
	for(int i = 0; i < 26; ++i) {
		char c = 'a' + i;
		sum[i].resize(n + 1, 0);
		
		for(int j = 0; j < n; ++j)
			sum[i][j + 1] = (sum[i][j] * 2 + (t[j] == c)) % MOD;
	}
	
	pw.resize(n + 1, 0);
	pw[0] = 1;
	
	for(int i = 1; i <= n; ++i)
		pw[i] = 2LL * pw[i - 1] % MOD;
}

void init() {
	scanf("%d %d", &n, &q);
	read(s), read(t);

	prepare_songs();
	prepare_sum();
}

vector <int> kmp(string &in) {
	int m = in.size(), cpref = 0;
	vector <int> dp(m, 0);
	
	for(int i = 1; i < (int)in.size(); ++i) {
		while(cpref > 0 && in[cpref] != in[i])
			cpref = dp[cpref - 1];
		
		if(in[cpref] == in[i])
			++cpref;
		dp[i] = cpref;
	}
	
	return dp;
}

/* Get all borders based on dp from kmp */
vector <bool> get(vector <int> &dp, int m) {
	vector <bool> ret(m + 1, false);
	int cur = dp.back();
	
	while(cur) {
		ret[cur] = true;
		cur = dp[cur - 1];
	}
	
	ret[cur] = true;
	return ret;
}

int answer(int k, string &w) {
	int id = 0;
	while(songs[id].size() < w.size())
		++id;
	
	if(id > k)
		return 0;
	
	int m = w.size();
	string s_pref = w + '#' + songs[id];
	string s_suf = songs[id] + '#' + w;
	
	auto dp_pref = kmp(s_pref);
	auto dp_suf = kmp(s_suf);
	
	auto pref = get(dp_pref, m);
	auto suf = get(dp_suf, m);
	
	/* Compute all internal occurences */
	int ret = 0;
	for(auto &v: dp_pref)
		ret += (v == m);
	ret = 1LL * ret * pw[k - id] % MOD;
	
	/* Compute the remaining occurences */
	for(int i = 0; i < m; ++i) {
		if(!pref[i] || !suf[m - i - 1])
			continue;
		
		int c = w[i] - 'a';
		ret = (ret + sum[c][k] - 1LL * sum[c][id] * pw[k - id]) % MOD;
	}
	
	ret = (ret + MOD) % MOD;
	return ret;
}

void solve() {
	while(q--) {
		int k;
		string w;
		
		scanf("%d", &k);
		read(w);
		printf("%d\n", answer(k, w));
	}
}

int main() {
	init();
	solve();
	return 0;
}