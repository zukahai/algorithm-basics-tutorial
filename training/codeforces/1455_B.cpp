/*
https://codeforces.com/contest/1455/problem/B
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		
		int steps = 0;
		while (steps * (steps + 1) < 2 * x)
			steps++;
		
		if (steps * (steps + 1) / 2 == x + 1)
			steps++;
		cout << steps << endl;
	}
}