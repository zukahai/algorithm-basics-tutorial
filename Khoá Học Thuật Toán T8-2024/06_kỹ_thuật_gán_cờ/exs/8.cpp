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

    int flag = 0;

    for (auto x: mp) {
        if (x.second == 2) {
            cout << x.first << " ";
            flag = 1;
        }
    }

    if (flag == 0) {
        cout << "-1";
    }
}

// m = 1000000007
// (a * b) % m = ((a % m) * (b % m)) % m
// (a / b) % m = (a % m) * (b ^ -1 % m) % m
// b ^ -1 % m = b ^ (m - 2) % m