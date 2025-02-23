#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n + 1);
    vector <long long> dp(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2]) + a[i];
    }
    cout << dp[n] << endl;

    int index = n;
    vector <int> v;
    v.push_back(a[n]);

    while (index != 1) {
        if (dp[index - 1] > dp[index - 2]) {
            index = index - 1;
        } else {
            index = index - 2;
        }
        v.push_back(a[index]);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
}