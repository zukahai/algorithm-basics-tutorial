#include <bits/stdc++.h>

using namespace std;

#define m 1000000007

int maxDigit(int n) {
    int max = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > max) {
            max = digit;
        }
        n /= 10;
    }
    return max;
}

int main() {
    vector<int> dp(1000009);
    int t, n, a;
    cin >> t >> a;
    dp[0] = a;
    for (int k = 1; k <= 1000000; k++) {
        dp[k] = dp[k - 1] + maxDigit(dp[k - 1]);
        dp[k] %= m;
    }

    while (t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
}