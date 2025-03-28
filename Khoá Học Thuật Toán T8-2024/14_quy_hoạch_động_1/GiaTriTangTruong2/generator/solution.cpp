#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int t, n, a;
    cin >> t >> a;
    vector<int> dp(1000009, 0);
    dp[0] = a;
    for (int i = 1; i < dp.size(); i++)
    {
        dp[i] = dp[i - 1] + maxDigit(dp[i - 1]);
    }

    while (t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    
}
