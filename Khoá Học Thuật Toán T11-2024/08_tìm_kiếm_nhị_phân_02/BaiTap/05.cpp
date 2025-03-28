#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long l = 1, r = 1e18;
    long long res = -1;

    while (l <= r) {
        long long t = (l + r) / 2;
        long long s = 0;
        for (int i = 0; i < n; i++) {
            s += t / a[i];
            if (s >= m)
                break;
        }
        if (s == m) {
            res = t;
            r = t - 1;
        }
        if (s > m) {
            res = t;
            r = t - 1;
        }
        if (s < m) {
            l = t + 1;
        }
        
    }
    cout << res;
}