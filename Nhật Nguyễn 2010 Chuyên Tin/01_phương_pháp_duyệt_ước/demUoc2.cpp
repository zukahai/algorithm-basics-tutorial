#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int d = 0;

    for (int i = 1; 1ll * i * i <= n; i++) {
        if (n % i == 0) { // i va n/i la 2 uoc cua n
            d++;
            if (n / i != i) {
                d++;
            }
        }
    }

    cout << d;
}