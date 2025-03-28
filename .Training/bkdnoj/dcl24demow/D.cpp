#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string target;
    cin >> target;
    vector<string> strings(n);
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    int m = target.size();
    vector<int> dp(m + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < m; ++i) {
        if (dp[i] == INT_MAX) continue;
        for (int j = 0; j < n; ++j) {
            int len = strings[j].size();
            if (i + len <= m && target.substr(i, len) == strings[j]) {
                dp[i + len] = min(dp[i + len], dp[i] + 1);
            } else {
                for (int k = 1; k <= len && i + k <= m; ++k) {
                    if (target.substr(i, k) == strings[j].substr(0, k)) {
                        dp[i + k] = min(dp[i + k], dp[i] + 1);
                    }
                }
            }
        }
    }

    int result = dp[m] == INT_MAX ? -1 : dp[m];
    cout << result << endl;
    return 0;
}
