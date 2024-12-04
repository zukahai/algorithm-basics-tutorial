#include <bits/stdc++.h>

using namespace std;

int main() {
    map <long long, long long> mp;

    int n;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    for (auto x: mp) {
        cout << x.first << " " << x.second << endl;
    }

}