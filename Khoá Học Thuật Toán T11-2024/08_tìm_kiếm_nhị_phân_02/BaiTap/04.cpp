#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    int l = 1, r = n;
    int res = -1;

    while (l <= r) {
        long long m = (l + r) / 2;
        long long p = m + (m / a) * b; 
        if (p == n) {
            res = m;
            break;
        }
        if (p > n) {
            res = m;
            r = m - 1;
        }
        if (p < n) {
            l = m + 1;
        }
    }
    cout << res;
}