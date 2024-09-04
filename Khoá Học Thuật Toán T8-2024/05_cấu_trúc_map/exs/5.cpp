#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    long long max = 0;

    for (auto x: mp) {
        if (max < x.first * x.second) {
            max = x.first * x.second;
        }
    }

    cout << max;
}