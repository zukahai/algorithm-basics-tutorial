/*
https://codeforces.com/contest/1481/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define oo 1000000010
const int N = 300010;

int n , m;

int a[N] , b[N] , c[N] , ans[N];

vector< int > g[N];

void solve(){
	scanf("%d%d",&n,&m);
	for(int i = 1 ;i <= n;i++) g[i].clear();
	for(int i = 0 ;i < n;i++)
		scanf("%d",&a[i]);
	for(int i = 0 ;i < n;i++){
		scanf("%d",&b[i]);
		if(b[i] != a[i])
			g[b[i]].push_back(i);
	}
	for(int i = 0; i < m;i++){
		scanf("%d",&c[i]);
	}
	int last = -1;
	if((int)g[c[m - 1]].size() > 0){
		last = g[c[m - 1]].back();
		g[c[m - 1]].pop_back();
	}
	else{
		for(int i = 0 ;i < n;i++){
			if(b[i] == c[m - 1]){
				last = i;
				break;
			}
		}
	}
	if(last == -1){
		puts("NO");
		return;
	}
	ans[m - 1] = last;
	for(int i = 0 ;i < m - 1;i++){
		if((int)g[c[i]].size() == 0){
		 	ans[i] = last;
		}
		else{
			ans[i] = g[c[i]].back();
			g[c[i]].pop_back();
		}
	}
	for(int i = 1;i <= n;i++){
		if((int)g[i].size() > 0){
			puts("NO");
			return;
		}
	}
	puts("YES");
	for(int i = 0 ;i < m;i++){
		if(i) putchar(' ');
		printf("%d",ans[i] + 1);
	}
	puts("");
}



int main(){
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}