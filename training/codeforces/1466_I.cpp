/*
https://codeforces.com/contest/1466/problem/I
*/
#include <bits/stdc++.h>

using namespace std;

#define st first
#define nd second

int n, b;

void write(int i, string y){
	printf("%d ", i);
	for(auto p: y)
		printf("%c", p);
	puts("");
	fflush(stdout);
}

bool ask(int i, string y){
	write(i, y);
	string ans;
	cin >> ans;
	return ans == "yes";
}

void solve(vector <int> cur, string pref){
	if(pref.size() == b){
		write(0, pref);
		return;
	}

	stack <pair <int, string> > S;
	S.push({0, pref});
	
	for(auto v: cur){
		while(S.size() > 1){
			auto prv = S.top().nd;
			while(prv.size() < b)
				prv.push_back('1');

			if(!ask(v, prv))
				break;
			S.pop();
		}
		
		if(S.top().nd.size() == b)
			continue;
		
		auto prv = S.top().nd;
		prv.push_back('0');

		while(prv.size() < b)
			prv.push_back('1');

		if(ask(v, prv)){
			prv = S.top().nd + "1";
			S.push({v, prv});
		}
		else{
			prv = S.top().nd + "0";
			S.push({v, prv});
		}
	}
	
	vector <int> nxt;
	string ans = S.top().nd;
	
	while(S.size() > 1){
		auto p = S.top();
		S.pop();
		
		string tmp = ans;
		while(tmp.size() < b)
			tmp.push_back('1');
		
		if(ask(p.st, tmp)){
			nxt.clear();
			ans = p.nd;
		}
		
		nxt.push_back(p.st);
	}
	
	solve(nxt, ans);
}

int main(){
	scanf("%d %d", &n, &b);
	vector <int> all_ids;
	for(int i = 0; i < n; ++i)
		all_ids.push_back(i + 1);
	solve(all_ids, "");
	return 0;
}