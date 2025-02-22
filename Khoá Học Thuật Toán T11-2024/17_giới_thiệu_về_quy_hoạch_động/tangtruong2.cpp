#include <bits/stdc++.h>

using namespace std;

vector<long long> dp(1000001);

int maxDigit(int n) {
    int maxD = -1;
    while (n > 0) {
        int d = n % 10;
        if (d > maxD) {
            maxD = d;
        }
        n /= 10;
    }
    return maxD;
}

int main() {
    int t, a, n;
    cin >> t >> a;
    dp[1] = a + maxDigit(a);
    for (int i = 2; i <= 1000000; i++) {
        dp[i] = dp[i - 1] + maxDigit(dp[i - 1]);
    }

    while (t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
}