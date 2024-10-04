#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = 1;
    for (int k = 0; k < n; k++) {
        // (a[k] + a[k - 1]) % 2 == 0
        if ((a[k] % 2 == 0 && a[k - 1] % 2 == 0) || (a[k] % 2 != 0 && a[k - 1] % 2 != 0)) {
            dp[k] = dp[k - 1] + 1;
        } else {
            dp[k] = 1;
        }
    }

    int max = dp[0];
    int e = 0;

    for (int i = 1; i < n; i++) {
        if (dp[i] > max) {
            max = dp[i];
            e = i;
        }
    }

    int s = e - max + 1;
    cout << max << endl;

    for (int i = s; i <= e; i++) {
        cout << a[i] << " ";
    }
}

/*
Kết thúc tại k
7
4 2 6 1 3 5 7

dp[0] = 1
dp[1] = 2
dp[2] = 3
dp[3] = 1
dp[4] = 2
dp[5] = 3
dp[6] = 4

dp[k] = 1
dp[k] = dp[k - 1] + 1 nếu (a[k] + a[k - 1]) % 2 == 0
*/