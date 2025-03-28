#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = a[0];
    dp[1] = a[0] + a[1];
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2]) + a[i];
    }
    cout << dp[n - 1];
}