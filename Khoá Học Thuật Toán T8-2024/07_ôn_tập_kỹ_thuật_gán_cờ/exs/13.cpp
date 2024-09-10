#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> a;
    unordered_map <int, int> mp;
    int n;
    cin >> n;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    string flag = "YES";

    int max = 0;
    for (auto x : mp) {
        if (x.second > max) {
            max = x.second;
        }
    }

    if (max < n - 1)
        flag = "NO";

    cout << flag;
}