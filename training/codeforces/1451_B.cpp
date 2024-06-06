/*
https://codeforces.com/contest/1451/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int i, n, Q; string s;
        cin >> n >> Q >> s;
        while(Q--) {
            int l, r; cin >> l >> r; --l; --r;
            bool bad = true;
            for(i = 0; i < l and bad; i++)
                if(s[i] == s[l]) bad = false;
            for(i = r+1; i < n and bad; i++)
                if(s[i] == s[r]) bad = false;
            cout << (bad? "NO" : "YES") << '\n';
        }
    }
    return 0;
}