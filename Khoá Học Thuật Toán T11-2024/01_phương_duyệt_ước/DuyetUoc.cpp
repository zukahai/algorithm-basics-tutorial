#include <bits/stdc++.h>  

using namespace std;

int main() {
    long long n;
    cin >> n;
    int dem = 0;
    for (int x = 1; x <= sqrt(n); x++) {
        if (n % x == 0) { // x la uoc cua n, n/x cung la uoc cua n
            dem += 1; // dem cho uoc x

            if (n / x != x) {
                dem += 1; // dem cho uoc n / x
            }
        }
    }
    cout << dem;
}