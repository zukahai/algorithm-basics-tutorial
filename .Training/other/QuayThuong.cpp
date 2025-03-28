#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    map <long long, int> mp;
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
        mp[b[i]] = 0;
    }

    long long max = 0;
    for (auto x : mp) {
        max = (max < x.first * x.second) ? x.first * x.second : max;
    }

    for (int i = 0; i < n; i++) {
        if (mp[a[i]] > 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl << max;
}

/*
8 5
1 7 5 3 2 5 7 5
3 1 4 6 4
*/