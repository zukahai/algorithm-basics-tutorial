#include<bits/stdc++.h>
using namespace std;

int sumDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector<long long> dp(1000009, 0);
    dp[0] = 0;
    for (int i = 1; i < dp.size(); i++)
    {
        dp[i] = dp[i - 1] + sumDigit(i);
    }

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    
}
