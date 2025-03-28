/*
https://codeforces.com/contest/1418/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a) cin >> it;
        int ans = 0;
        ans += a[0] == 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] == 0) {
                continue;
            }
            int j = i;
            while (j < n && a[j] == 1) {
                ++j;
            }
            ans += (j - i) / 3;
            i = j - 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}