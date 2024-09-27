#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector<int> dp(1000001, 0);
    dp[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        dp[i] = dp[i - 1] * 2;
        dp[i] %= 1000000007;
    }

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }

    
}
