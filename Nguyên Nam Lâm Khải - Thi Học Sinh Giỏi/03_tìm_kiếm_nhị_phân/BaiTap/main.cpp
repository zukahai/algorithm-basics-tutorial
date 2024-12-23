#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long res = -1;
    long long t, l = 1, r = 1e18;
    while (l <= r) {
        t = (l + r) / 2;
        long long e = 0;
        for (int i = 0; i < n; i++) {
            e += t / a[i];
            if (e >= m)
                break;
        }
        if (e >= m) {
            res = t;
            r = t - 1;
        } else {
            l = t + 1;
        }
    }

    cout << res;
}