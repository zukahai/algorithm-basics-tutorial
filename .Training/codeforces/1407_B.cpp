/*
https://codeforces.com/contest/1407/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int mi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mi = (a[i] > a[mi] ? i : mi);
    }
    vector<int> b(n);
    b[0] = a[mi]; a[mi] = 0;
    int cg = b[0];
    for (int i = 1; i < n; i++) {
        int ci = 0, cans = 0;
        for (int j = 0; j < n; j++)
            if (a[j] && __gcd(a[j], cg) > cans) {
                cans = __gcd(a[j], cg);
                ci = j;
            }
        b[i] = a[ci];
        cg = cans;
        a[ci] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}