#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n, 1);
    vector<int> t(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int k = 1; k < n; k++) {
        int max = 0;
        for (int i = 0; i < k; i++) {
            if (a[k] > a[i]) {
                if (dp[i] > max) {
                    max = dp[i];
                    t[k] = i;
                }
            }
        }
        dp[k] = max + 1;
    }

    int max = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > max) {
            max = dp[i];
            end = i;
        }
    }

    vector<int> res;
    while (end != -1) {
        res.push_back(a[end]);
        end = t[end];
    }

    reverse(res.begin(), res.end());
    
    for (auto x : res) {
        cout << x << " ";
    }
}