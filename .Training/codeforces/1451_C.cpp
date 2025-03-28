/*
https://codeforces.com/contest/1451/problem/C
*/
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int i, n, k; string a, b;
        cin >> n >> k >> a >> b;
        array<int, 27> have{}, need{};
        for(auto& c: a)
            have[c-'a']++;
        for(auto& c: b)
            need[c-'a']++;
     
        bool bad = false;
        for(i = 0; i < 26; i++) {
            if(have[i] < need[i] || (have[i] -= need[i]) % k)
                bad = true;
            have[i+1] += have[i];
        }
        cout << (bad? "No" : "Yes") << '\n';
    }
    return 0;
}