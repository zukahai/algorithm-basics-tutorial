#include<bits/stdc++.h>
using namespace std;

#define  MIN -1000000000000000

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int m, n;
    cin >> m >> n;
    vector< vector<int>> a (m + 1, vector<int> ( n + 1));
    vector< vector<long long>> dp (m + 1, vector<long long> ( n + 1, MIN));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            long long k = max(dp[i - 1][j], dp[i][j - 1]);
            dp[i][j] = k + a[i][j];
            if (k == MIN)
            {
                dp[i][j] = a[i][j];
            }
        }
    }

    cout << dp[m][n] << endl;
    
}
