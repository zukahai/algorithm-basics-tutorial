#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    vector<int> t(m), p(m);
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }

    int l = 1, r = 1e9;
    long long res = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        vector<long long> a(m, 0);
        for (int i = 0; i < m; i++) {
            if (mid >= t[i]) {
                a[i] = (mid - t[i]) / p[i] + 1;
            }
        }

        sort(a.begin(), a.end());

        long long sum = 0;

        for (int i = max(m - n, 0); i < m; i++) {
            sum += a[i];
        }

        if (sum >= k) {
            res = mid;
            r = mid - 1;

        } else {
            l = mid + 1;
        }
    }

    cout << res;
}