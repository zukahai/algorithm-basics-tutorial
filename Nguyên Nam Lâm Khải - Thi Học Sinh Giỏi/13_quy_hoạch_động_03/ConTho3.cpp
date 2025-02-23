#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n + 1), t(n + 1), v;
    vector <long long> dp(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    t[1] = -1;
    t[2] = 1;
    for (int i = 3; i <= n; i++) {
        // dp[i] = max(dp[i - 1], dp[i - 2]) + a[i];
        if (dp[i - 1] > dp[i - 2]) {
            dp[i] = dp[i - 1] + a[i];
            t[i] = i - 1;
        } else {
            dp[i] = dp[i - 2] + a[i];
            t[i] = i - 2;
        }
    }
    cout << dp[n] << endl;

    int index = n;
    while(index != -1) {
        v.push_back(a[index]);
        index = t[index];
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
}

// dp[i] = max(dp[i - 1], dp[i - 2], dp[i - 3]) 