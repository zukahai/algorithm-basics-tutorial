#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int d = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            d++;
        }
    }

    cout << d;
}