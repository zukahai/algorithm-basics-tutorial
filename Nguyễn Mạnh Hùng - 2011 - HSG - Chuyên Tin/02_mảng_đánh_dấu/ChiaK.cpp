#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll> a(1000009), d(1000009);

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        d[a[i] % k]++;
    }

    ll res = d[0] * (d[0] - 1) / 2;

    for (int i = 1; i < k / 2.0; i++) {
        res += d[i] * d[k - i];
    }

    if (k % 2 == 0) {
        res += d[k / 2] * (d[k / 2] - 1) / 2;
    }

    cout << res;
}