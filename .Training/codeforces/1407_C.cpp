/*
https://codeforces.com/contest/1407/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
int ask(int x, int y) {
    cout << "? " << x + 1 << ' ' << y + 1 << endl;
    int z;
    cin >> z;
    return z;
}
int main() {
    int n;
    cin >> n;
    vector<int>ans(n, -1);
    int mx = 0;
    for (int i = 1; i < n; i++) {
        int a = ask(mx, i);
        int b = ask(i, mx);
        if (a > b) {
            ans[mx] = a;
            mx = i;
        } else {
            ans[i] = b;
        }
    }
    ans[mx] = n;
    cout << "! ";
    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}