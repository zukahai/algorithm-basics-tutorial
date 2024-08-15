/*
https://codeforces.com/contest/1437/problem/G
*/
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

const int AL = 26;
vector<vector<pair<int, int>>> upd;
vector<int> ans;
int n, m;

struct segtree{
	vector<int*> where;
	vector<int> vals;
	vector<int> t;
	int n;
	
	segtree(){}
	
	segtree(int n) : n(n){
		t.assign(4 * n, -1);
		where.clear();
		vals.clear();
	}
	
	void updh(int v, int l, int r, int L, int R, int val){
		if (L >= R)
			return;
		if (l == L && r == R){
			where.push_back(&t[v]);
			vals.push_back(t[v]);
			t[v] = max(t[v], val);
			return;
		}
		int m = (l + r) / 2;
		updh(v * 2, l, m, L, min(m, R), val);
		updh(v * 2 + 1, m, r, max(m, L), R, val);
	}
	
	void upd(int l, int r, int val){
		updh(1, 0, n, l, r, val);
	}
	
	int geth(int v, int l, int r, int pos){
		if (l == r - 1)
			return t[v];
		int m = (l + r) / 2;
		if (pos < m)
			return max(t[v], geth(v * 2, l, m, pos));
		return max(t[v], geth(v * 2 + 1, m, r, pos));
	}
	
	int get(int pos){
		return geth(1, 0, n, pos);
	}
	
	void rollback(){
		*where.back() = vals.back();
		where.pop_back();
		vals.pop_back();
	}
};

segtree st;

struct aho_corasick {
	struct node {
		map<int, int> nxt, go;
		int p, pch;
		int suf, ssuf;
		vector<int> term, qs;
		
		node() {
			nxt.clear();
			go.clear();
			suf = ssuf = -1;
			term.clear();
			p = -1, pch = -1;
			qs.clear();
		}
	};

	vector<node> nodes;
	vector<vector<int>> g;
	
	aho_corasick() {
		nodes = vector<node>(1, node());
	}

	void add(const string& s, int id) {
		int v = 0;
		forn(i, s.size()) {
			int c = s[i] - 'a';
			if (!nodes[v].nxt.count(c)) {
				nodes.push_back(node());
				nodes[v].nxt[c] = int(nodes.size()) - 1;
				nodes.back().p = v;
				nodes.back().pch = c;
			}
			v = nodes[v].nxt[c];
		}
		nodes[v].term.push_back(id);
	}
	
	void feed(const string &s, int id){
		int v = 0;
		forn(i, s.size()){
			int c = s[i] - 'a';
			v = go(v, c);
			nodes[v].qs.push_back(id);
		}
	}
	
	int go(int v, int c) {
		if (nodes[v].go.count(c))
			return nodes[v].go[c];
		if (nodes[v].nxt.count(c))
			return nodes[v].go[c] = nodes[v].nxt[c];
		if (v == 0)
			return nodes[v].go[c] = 0;
		return nodes[v].go[c] = go(suf(v), c);
	}
	
	int suf(int v) {
		if (nodes[v].suf != -1)
			return nodes[v].suf;
		if (v == 0 || nodes[v].p == 0)
			return nodes[v].suf = 0;
		return nodes[v].suf = go(suf(nodes[v].p), nodes[v].pch);
	}
	
	void build_tree() {
		g.resize(nodes.size());
		forn(v, nodes.size()) {
			int u = suf(v);
			if (v != u)
				g[u].push_back(v);
		}
	}
	
	void dfs(int v){
		int cur = st.where.size();
		for (auto i : nodes[v].term){
			int lst = m;
			for (auto it : upd[i]){
				st.upd(it.first, lst, it.second);
				lst = it.first;
			}
			st.upd(0, lst, 0);
		}
		for (auto j : nodes[v].qs){
			ans[j] = max(ans[j], st.get(j));
		}
		for (int u : g[v]){
			dfs(u);
		}
		int nw = st.where.size();
		forn(_, nw - cur){
			st.rollback();
		}
	}
};

aho_corasick ac;

int main() {
	ios::sync_with_stdio(!cin.tie(0));
	cin >> n >> m;
	upd.resize(n);
	ans.resize(m, -1);
	
	vector<int> tp2;
	
	ac = aho_corasick();
	st = segtree(m);
	
	forn(i, n){
		string s;
		cin >> s;
		ac.add(s, i);
	}
	forn(i, m){
		int t;
		cin >> t;
		if (t == 1){
			int j, x;
			cin >> j >> x;
			--j;
			upd[j].push_back(make_pair(i, x));
		}
		else{
			string q;
			cin >> q;
			ac.feed(q, i);
			tp2.push_back(i);
		}
	}
	forn(i, n){
		reverse(upd[i].begin(), upd[i].end());
	}
	
	ac.build_tree();
	ac.dfs(0);
	for (auto it : tp2)
		cout << ans[it] << "\n";
	return 0;
}