/*
https://codeforces.com/contest/1407/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n), ans;
        int cnt0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (!a[i]) cnt0++;
        }
        int cnt1 = n - cnt0;
        if (cnt0 >= n / 2) {
            cout << cnt0 << '\n';
            for (int i = 0; i < cnt0; i++) cout << 0 << ' ';
        } else {
            cout << cnt1 - cnt1 % 2 << '\n';
            for (int i = 0; i < cnt1 - cnt1 % 2; i++) {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}