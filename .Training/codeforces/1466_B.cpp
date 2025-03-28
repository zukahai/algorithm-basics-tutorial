/*
https://codeforces.com/contest/1466/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	scanf("%d", &n);
	
	int ans = 0;
	int prv = 0, ok = 0;
	
	for(int i = 1; i <= n; ++i) {
		int a;
		scanf("%d", &a);
		
		ans += (a != prv);
		ok |= (a == prv);
		
		if(prv + 1 < a)
			ans += ok, ok = 0;
		prv = a;
	}
	
	ans += ok;
	printf("%d\n", ans);
}

int main() {
	int cases;
	scanf("%d", &cases);
	
	while(cases--)
		solve();
	return 0;
}