#include <bits/stdc++.h>

using namespace std;

#define m 1000000007

int main() {
    vector<int> dp(1000009);
    dp[0] = 1;
    for (int k = 1; k <= 1000000; k++) {
        dp[k] = (1ll * k * dp[k - 1]) % m;
    }

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
}