#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> dp(m + 1, 10000);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = 0;

    for (int k = 1; k <= m; k++) {
        for (int i = 0; i < n; i++) {
            if (k >= a[i]) {
                if (dp[k - a[i]] + 1 < dp[k]) {
                    dp[k] = dp[k - a[i]] + 1;
                }
            }
        }
    }

    cout << (dp[m] == 10000 ? -1 : dp[m]);
}