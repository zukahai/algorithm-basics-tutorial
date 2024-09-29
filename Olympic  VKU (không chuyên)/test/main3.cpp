#include <bits/stdc++.h>   

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long tong = 0;
    for (int x = 1; x <= sqrt(n); x++) {
        if (n % x == 0) { // x, n/x
            tong = tong + x;
            if (n / x != x) {
                tong = tong + n / x;
            }
        }
    }

    cout << tong;
}