#include<bits/stdc++.h>
using namespace std;

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
        dp[i] = dp[i - 1] + dp[i - 1] % 10;
    }

    while (t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    
}
