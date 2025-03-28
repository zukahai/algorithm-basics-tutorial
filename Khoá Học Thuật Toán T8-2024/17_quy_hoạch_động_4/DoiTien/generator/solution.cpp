#include<bits/stdc++.h>
using namespace std;

#define MAX 10000000

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int m, n;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> dp(m + 1, MAX);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    dp[0] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - a[j] >= 0)
            {
                if (dp[i] > dp[i - a[j]] + 1)
                {
                    dp[i] = dp[i - a[j]] + 1;
                }
            }
        }
    }

    cout << (dp[m] == MAX ? -1 : dp[m]);

    
}
