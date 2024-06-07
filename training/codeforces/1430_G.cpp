/*
https://codeforces.com/contest/1430/problem/G
*/
#include<bits/stdc++.h>

using namespace std;

typedef long long li;

const int N = 18;
const int M = (1 << N);
const li INF64 = li(1e18);

int n, m;
vector<int> g[N];
li sum[N];
int need_mask[N];
li dp[N + 1][N + 1][M];
bool p[N + 1][N + 1][M];

vector<int> order;       
vector<int> used;

void dfs(int x, bool build_topo)
{
    if(used[x])
    	return;
    used[x] = 1;
    for(auto y : g[x])
    	dfs(y, build_topo);
    if(build_topo)
    	order.push_back(x);
}

int main()
{
	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
	 	int x, y, w;
	 	cin >> x >> y >> w;
	 	--x;
	 	--y;
	 	sum[x] += w;
	 	sum[y] -= w;
	 	g[x].push_back(y);
	}
	used.resize(n);
	for(int i = 0; i < n; i++)
		dfs(i, true);
	for(int i = 0; i < n; i++)
	{
	 	used = vector<int>(n, 0);
	 	dfs(i, false);
	 	for(int j = 0; j < n; j++)
	 		if(j != i && used[j] == 1)
	 			need_mask[i] |= (1 << j);		
	}
	for(int i = 0; i <= n; i++)
		for(int j = 0; j <= n; j++)
			for(int k = 0; k < (1 << n); k++)
				dp[i][j][k] = INF64;
	dp[0][0][0] = 0;
	reverse(order.begin(), order.end());
	for(int i = 0; i < n; i++)
		for(int j = 0; j <= n; j++)
			for(int k = 0; k < (1 << n); k++)
			{
			 	if(dp[i][j][k] > INF64 / 2)
			 		continue;
			 	if(j == n)
			 	{
			 	 	if(dp[i + 1][0][k] > dp[i][j][k])
			 	 	{
			 	 	 	dp[i + 1][0][k] = dp[i][j][k];
			 	 	 	p[i + 1][0][k] = false;
			 	 	}
			 	}
			 	else
			 	{
			 		int v = order[j];
			 		li add = sum[v] * i;
			 		if(dp[i][j + 1][k] > dp[i][j][k])
			 		{
			 		 	dp[i][j + 1][k] = dp[i][j][k];
			 		 	p[i][j + 1][k] = false;
			 		}
			 		if(((k & (1 << v)) == 0) && ((need_mask[v] & k) == need_mask[v]))
			 		{
			 		 	int nk = k | (1 << v);
			 		 	if(dp[i][j + 1][nk] > dp[i][j][k] + add)
			 		 	{
			 		 	 	dp[i][j + 1][nk] = dp[i][j][k] + add;
			 		 	 	p[i][j + 1][nk] = true;
			 		 	}
				 	}
				}
			}
	vector<int> ans(n);
	int i = n;
	int j = 0;
	int k = (1 << n) - 1;
	while(i > 0 || j > 0 || k > 0)
	{
	 	if(j == 0)
	 	{
	 	 	j = n;
	 	 	i--;
	 	}
	 	else
	 	{
	 	 	if(p[i][j][k])
	 	 	{
	 	 	 	int v = order[j - 1];
	 	 	 	ans[v] = i;
	 	 	 	k ^= (1 << v);
	 		}
	 		j--;
	 	}
	}
	for(int i = 0; i < n; i++)
		cout << ans[i] << " \n"[i == n - 1];
}