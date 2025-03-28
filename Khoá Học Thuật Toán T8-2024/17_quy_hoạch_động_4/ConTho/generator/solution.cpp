#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long long> dp(n, 0);
    dp[0] = a[0];
    dp[1] = a[0] + a[1];
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1] , dp[i - 2]) + a[i];
    }

    cout << dp[n - 1];

    
}
