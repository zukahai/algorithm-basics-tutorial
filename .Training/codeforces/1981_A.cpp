#include <bits/stdc++.h>

using namespace std;

int solve(int l, int r) {
    int ans = 0;
    int index = 1;
    while (index <= r) {
        index *= 2;
        ans++;
    }
    return ans - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }
}