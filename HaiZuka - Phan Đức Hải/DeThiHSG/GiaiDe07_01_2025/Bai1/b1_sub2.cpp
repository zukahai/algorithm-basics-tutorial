#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    int max = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < i; j++) {
            int k = __gcd(a[i], a[j]);
            if (k > max) {
                max = k;
            }
        }
        b[i] = max;
    }

    max = 0;
    for (int i = n - 2; i >= 1; i--) {
        for (int j = n - 1; j > i; j--) {
            int k = __gcd(a[i], a[j]);
            if (k > max) {
                max = k;
            }
        }
        c[i] = max;
    }
    int res = 0;
    for (int i = 1; i < n - 1; i++) {
        if (b[i] + c[i + 1] > res) {
            res = b[i] + c[i];
        }
    }

    cout << res;
}