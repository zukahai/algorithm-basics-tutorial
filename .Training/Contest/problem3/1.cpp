#include <bits/stdc++.h>

using namespace std;

vector<int> listDigit(int n) {
    vector<int> res;
    while (n > 0) {
        if (n % 10 != 0)
            res.push_back(n % 10);
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<string> dp(n + 1);
    dp[0] = "Lose";
    for (int i = 1; i <= n; i++) {
        dp[i] = "Lose";
        vector<int> digits = listDigit(i);
        for (auto x : digits) {
            if (dp[i - x] == "Lose") {
                dp[i] = "Win";
                break;
            }
        }
    }

    cout << ((dp[n] == "Win") ? "Hai" : "Linh") << endl;

}