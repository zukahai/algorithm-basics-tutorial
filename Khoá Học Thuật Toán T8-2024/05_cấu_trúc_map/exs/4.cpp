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

    for (auto x: mp) {
        if (x.second % 2 != 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}