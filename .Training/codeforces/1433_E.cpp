/*
https://codeforces.com/contest/1433/problem/E
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 21;

long long f[N];

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	f[0] = 1;
	for (int i = 1; i < N; ++i) {
		f[i] = f[i - 1] * i;
	}
	
	long long ans = f[n] / f[n / 2] / f[n / 2];
	ans = ans * f[n / 2 - 1];
	ans = ans * f[n / 2 - 1];
	ans /= 2;
	
	cout << ans << endl;
	
	return 0;
}