#include <bits/stdc++.h>

using namespace std;

long long a[10000000];

int main() {
    map <long long, long long> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    int maxValue = 0;
    int maxkey = 0;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second > maxValue) {
            maxValue = it->second;
            maxkey = it->first;
        }
    }

    cout << maxkey << " " << maxValue;
}

/*
i, a[i]
a[10000000]

map<key, value> m;
key, value

(-9, 10)
(1000000000, 10)
(123456789123456789, 15)


*/