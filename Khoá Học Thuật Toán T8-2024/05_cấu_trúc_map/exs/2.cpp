#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);
    map<long long, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    for (int i = 0; i < m; i++) {
        mp[b[i]]++;
    }

    for (auto x: mp) {
        if (x.second == 2)
            cout << x.first << " ";
    }
}