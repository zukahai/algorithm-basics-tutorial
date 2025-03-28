/*
https://codeforces.com/contest/1481/problem/F
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define oo 1000000010
const int N = 100010;
const int SQ = 500;
int n , x , p;
vector< int > g[N] , cur[N];

char c[N];

int mx;

vector< pair<int,int> > v , v2;

pair< int , char > a , b;

int sz[N];

bool comp(int u,int v){
	return (sz[u] < sz[v]);
}

int DFS(int node,int d){
	mx = max(mx,d);
	cur[d].push_back(node);
	sz[node] = 1;
	for(int i = 0 ;i < (int)g[node].size();i++)
		sz[node] += DFS(g[node][i] , d + 1);	
	return sz[node];
}

bool dp[SQ][N];

int f[N];

void build_path(int i,int j){
	if(i == (int)v2.size())
		return;
	while(!dp[i + 1][j]){
		f[v2[i].first]++;
		j -= v2[i].first;
	}
	build_path(i + 1 , j);
}

int main(){
	scanf("%d%d",&n,&x);
	a = make_pair(x , 'a');
	b = make_pair(n - x , 'b');
	if(a > b) swap(a , b);
	for(int i = 2 ;i <= n;i++){
		scanf("%d",&p);
		g[p].push_back(i);
	}
	DFS(1 , 0);
	for(int i = 0 ;i <= mx;i++)
		v.push_back(make_pair((int)cur[i].size() , i));
	sort(v.begin(),v.end());
	for(int i = 0 ;i < (int)v.size();i++){
		if(i == 0 || v[i].first != v[i - 1].first)
			v2.push_back(make_pair(v[i].first , 1));
		else
			v2.back().second++;
	}
	dp[(int)v2.size()][0] = true;
	int val , frq;
	for(int i = (int)v2.size() - 1;i >= 0;i--){
		val = v2[i].first;
		frq = v2[i].second;
		vector< int > last(val , -1);
		for(int j = 0 ;j <= a.first;j++){
			if(dp[i + 1][j] == true)
				last[j % val] = j;
			if(last[j % val] == -1 || ((j - last[j % val]) / val) > frq)
				dp[i][j] = false;
			else
				dp[i][j] = true;
		}
	}
	if(dp[0][a.first]){
		build_path(0 , a.first);
		for(int i = 1;i <= n;i++) c[i - 1] = b.second;
		for(int i = 0 ;i <= mx;i++){
			if(f[(int)cur[i].size()] == 0) continue;
			f[(int)cur[i].size()]--;
			for(int j = 0 ;j < (int)cur[i].size();j++)
				c[cur[i][j] - 1] = a.second;
		}
		printf("%d\n",mx + 1);
		c[n] = '\0';
		puts(c);
		return 0;	
	}
	printf("%d\n",mx + 2);
	for(int i = 0 ;i <= mx;i++){
		sort(cur[i].begin(),cur[i].end(),comp);
		if(a.first < b.first) swap(a , b);
		while((int)cur[i].size() > 0 && a.first > 0){
			c[cur[i].back() - 1] = a.second;
			cur[i].pop_back();
			a.first--;
		}
		while((int)cur[i].size() > 0 && b.first > 0){
			c[cur[i].back() - 1] = b.second;
			cur[i].pop_back();
			b.first--;
		}
	}
	c[n] = '\0';
	puts(c);
	return 0;
}