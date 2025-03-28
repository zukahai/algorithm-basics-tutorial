#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
    	if (n % i == 0) {
    		count ++;
		}
	}
	cout << count;
}

// O(n): 10^8
// O(1)

/*
O(1): chay dc tat ca moi N
O(logN): chay dc tat ca moi N
O(sqrt(n)): sqrt(n) < 10^8 -> n < 10^16
O(n): n < 10^8
O(n^2): n^2 < 10^8 -> n < 10^4
O(n^3): n^3 < 10^8 -> n < 464
O(n^4): n^4 < 10^8 -> n < 100

O(2^n):




*/
