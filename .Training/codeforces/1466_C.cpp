/*
https://codeforces.com/contest/1466/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 100 * 1000 + 7;

int n;
char in[N];
bool used[N];

void solve(){
	scanf("%s", in + 1);
	n = strlen(in + 1);
	
	for(int i = 1; i <= n; ++i)
		used[i] = false;
	
	int ans = 0;
	for(int i = 2; i <= n; ++i){
		bool use_need = false;
		if(in[i] == in[i - 1] && !used[i - 1])
			use_need = true;

		if(i > 2 && in[i] == in[i - 2] && !used[i - 2])
			use_need = true;

		used[i] = use_need;
		ans += used[i];
	}
	
	printf("%d\n", ans);
}

int main(){
	int cases;
	scanf("%d", &cases);
	
	while(cases--)
		solve();
	return 0;
}