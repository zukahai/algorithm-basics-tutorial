#include <bits/stdc++.h>

#define m 1000000007

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	a %= m;
	long long res = 1;
	while (b > 0) {
		if (b % 2 == 0) {
			a = a * a;
			a %= m;
			b /= 2;
		} else {
			res *= a;
			res %= m;
			b--;
		}
	}
	cout << res;
}


