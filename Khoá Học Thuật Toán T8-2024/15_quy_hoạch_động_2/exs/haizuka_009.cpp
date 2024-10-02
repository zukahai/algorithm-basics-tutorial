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

    // dp[k]: Độ dài của dãy con giống nhau dài nhất.
    // Kết thúc tại chỉ số K
    dp[0] = 1;
    for (int k = 1; k < n; k++) {
        if (a[k] == a[k - 1])
            dp[k] = dp[k - 1] + 1;
        else
            dp[k] = 1;
    }

    // for (auto x: dp)
    //     cout << x << " ";

    int max = dp[0];
    int e = 0;

    for (int i = 1; i < n; i++) {
        if (dp[i] > max) {
            max = dp[i];
            e = i;
        }
    }

    int s = e - max + 1;

    for (int i = s; i <= e; i++) {
        cout << a[i] << " ";
    }


}