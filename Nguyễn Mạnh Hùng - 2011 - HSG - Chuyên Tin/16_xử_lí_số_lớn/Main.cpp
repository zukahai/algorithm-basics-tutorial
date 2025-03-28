#include <bits/stdc++.h>

using namespace std;

int main() {
	long long a, b, c;
	long long m = 1000000007;
	long long res = 1;
	int N = 1000000;
	for (int i = 1; i <= N; i++) {
		res *= i;
		res %= m;
	}
	cout << res;

}
