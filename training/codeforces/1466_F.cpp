/*
https://codeforces.com/contest/1466/problem/F
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

const int N = 5e5 + 7;
const int MX = 1e9 + 7;

int n, m;
int rep[N];

int Find(int a) {
	if(rep[a] == a)
		return a;
	return rep[a] = Find(rep[a]);
}

bool Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	
	rep[a] = b;
	return a != b;
}

int main() {
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= m + 1; ++i)
		rep[i] = i;
	
	vector <int> ans;
	for(int i = 1; i <= n; ++i) {
		int k;
		scanf("%d", &k);
		
		int fa, fb = m + 1;
		scanf("%d", &fa);
		
		if(k > 1)
			scanf("%d", &fb);
		
		if(Union(fa, fb))
			ans.push_back(i);
	}
	
	int res = 1;
	for(int i = 0; i < (int)ans.size(); ++i)
		res = (res + res) % MX;

	printf("%d %d\n", res, (int)ans.size());
	for(auto v: ans)
		printf("%d ", v);
	puts("");
	return 0;
}