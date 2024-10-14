#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long res = 0;
    while (m > 0 && n > 0) {
        res = res + (m * n);
        res %= 1000000007;
        m--;
        n--;
    }
    cout << res;
}