/*
https://codeforces.com/contest/1481/problem/D
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define oo 1000000010
const int N = 1010;
int n , m;
char grid[N][N];
int has[N][2];


void solve(){
	scanf("%d%d",&n,&m);
	for(int i = 0 ;i <= n;i++) has[i][0] = has[i][1] = -1;
	for(int i = 0 ;i < n;i++){
		scanf("%s",grid[i]);
		for(int j = 0  ;j < n;j++){
			if(j == i) continue;
			has[i][grid[i][j] - 'a'] = j;
		}
	}
	if(m & 1){
		puts("YES");
		for(int i = 0 ;i < m + 1;i++){
			if(i) putchar(' ');
			printf("%d",(i & 1) + 1);
		}
		puts("");
		return;
	}
	for(int i = 0 ;i < n;i++){
		for(int j = i + 1;j < n;j++){
			if(grid[i][j] == grid[j][i]){
				puts("YES");
				for(int k = 0 ;k < m + 1;k++){
					if(k) putchar(' ');
					printf("%d",(k & 1 ? i + 1 : j + 1));
				}
				puts("");
				return;
			}
		}
	}
	for(int i = 0 ;i < n;i++){
		for(int j = 0;j < n;j++){
		    if(i == j) continue;
			if(has[j][grid[i][j] - 'a'] == -1) continue;
			puts("YES");
			int cur = has[j][grid[i][j] - 'a'];
			if((m / 2) % 2 == 1){
				for(int k = 0 ;k < m + 1;k++){
					if(k) putchar(' ');
					if(k % 4 == 0)
						printf("%d",i + 1);
					else if(k % 4 == 2)
						printf("%d",cur + 1);
					else
						printf("%d",j + 1);
				}
				puts("");
				return;
			}
			printf("%d",j + 1);
			for(int k = 0 ;k < m / 2;k++){
				if(k & 1) printf(" %d",j + 1); else printf(" %d",cur + 1);
			}
			for(int k = 0 ;k < m / 2;k++){
				if(k & 1) printf(" %d",j + 1); else printf(" %d",i + 1);
			}
			puts("");
			return;			
		}
	}
	puts("NO");
	return;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	    solve();
	return 0;
}