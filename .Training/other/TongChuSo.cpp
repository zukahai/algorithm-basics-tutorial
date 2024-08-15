#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	string s = "";
	for (int i = 9; i >= 1; i--) {
		if (n >= i) {
			s = char(i + '0') + s;
			n -= i;
		} else {
			s = char(n + '0') + s;
			break;
		}
	}
	cout << s;

}

