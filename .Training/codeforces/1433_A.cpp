/*
https://codeforces.com/contest/1433/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		string x;
		cin >> x;
		int dig = x[0] - '0' - 1;
		int len = x.size();
		cout << dig * 10 + len * (len + 1) / 2 << endl;
	}
	
	return 0;
}