/*
https://codeforces.com/contest/1436/problem/B
*/
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector <vector <int> > a(n);
    for (int i = 0; i < n; ++i) {
        a[i].resize(n, 0);
    }
 
    if (n == 4) {
        vector <vector <int> > matrix = {{4, 6, 8, 1}, {4, 9, 9, 9}, {4, 10, 10, 65}, {1, 4, 4, 4}};
        cout << "4 6 8 1\n4 9 9 9\n4 10 10 65\n1 4 4 4\n";
        return;
    }
 
    for (int i = 0; i < n; ++i) {
        a[i][i] = 1;
        a[i][n - i - 1] = 1;
    }
 
    if (n % 2) {
        a[n / 2 - 1][n / 2] = 1;
        a[n / 2][n / 2 + 1] = 1;
    }
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j];
            if (j < n - 1) cout << " ";
            else cout << "\n";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
 
 
    return 0;
}