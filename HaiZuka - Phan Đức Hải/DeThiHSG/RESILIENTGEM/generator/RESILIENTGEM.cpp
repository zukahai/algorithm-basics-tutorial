#include<bits/stdc++.h>
using namespace std;

int mulDigits(int n) {
    int res = 1;
    while (n > 0) {
        res *= n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    ifstream cin("RESILIENTGEM.INP");
    ofstream cout("RESILIENTGEM.OUT");
    
    int n;
    cin >> n;

    if (n <= 9) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> dp(n + 1, 1);
    dp[0] = 0;
    for (int i = 10; i <= n; i++) {
        dp[i] = dp[mulDigits(i)] + 1;
    }

    int res = 1, maxVal = 1;

    for (int i = 1; i <= n; i++) {
        if (dp[i] >= maxVal) {
            maxVal = dp[i];
            res = i;
        }
    }

    cout << dp[n] << endl;
    cout << res << " " << maxVal << endl;
 
}
