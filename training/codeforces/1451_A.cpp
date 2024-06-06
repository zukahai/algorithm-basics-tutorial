/*
https://codeforces.com/contest/1452/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << (n <= 3? n-1 : 2 + (n&1)) << '\n';
    }
    return 0;
}