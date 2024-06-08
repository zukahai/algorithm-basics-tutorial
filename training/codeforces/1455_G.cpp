/*
https://codeforces.com/contest/1455/problem/G
*/
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define x first
#define y second

using namespace std;

const long long INF = 1e18;

struct op{
	string tp;
	int y, v, to;
};

struct addmap{
	long long add;
	map<int, long long> val;
	multiset<long long> mn;
};

void reset(addmap &a, int x, long long val){
	if (a.val.count(x))
		a.mn.erase(a.mn.find(a.val[x]));
	a.val[x] = val - a.add;
	a.mn.insert(val - a.add);
}

int main() {
	int n, s;
	scanf("%d%d", &n, &s);
	static char buf[10];
	op a;
	vector<addmap> st;
	st.push_back({});
	st.back().val[0] = 0;
	st.back().add = 0;
	st.back().mn.insert(0);
	forn(i, n){
		scanf("%s", buf);
		a.tp = buf;
		if (a.tp == "set"){
			scanf("%d%d", &a.y, &a.v);
			assert(!st.back().mn.empty());
			long long mn = st.back().add + *st.back().mn.begin();
			st.back().add += a.v;
			if (a.y != s) reset(st.back(), a.y, mn);
		}
		else if (a.tp == "if"){
			scanf("%d", &a.y);
			long long val = INF;
			if (st.back().val.count(a.y)){
				val = st.back().val[a.y] + st.back().add;
				st.back().mn.erase(st.back().mn.find(st.back().val[a.y]));
				st.back().val.erase(a.y);
			}
			st.push_back({});
			reset(st.back(), a.y, val);
			st.back().add = 0;
		}
		else{
			if (st[int(st.size()) - 1].val.size() > st[int(st.size()) - 2].val.size())
				swap(st[int(st.size()) - 1], st[int(st.size()) - 2]);
			addmap& v = st[int(st.size()) - 2];
			for (auto it : st.back().val){
				if (!v.val.count(it.x) || v.val[it.x] + v.add > it.y + st.back().add){
					if (v.val.count(it.x))
						v.mn.erase(v.mn.find(v.val[it.x]));
					v.val[it.x] = it.y + st.back().add - v.add;
					v.mn.insert(it.y + st.back().add - v.add);
				}
			}
			st.pop_back();
		}
	}
	printf("%lld\n", *st.back().mn.begin() + st.back().add);
	return 0;
}