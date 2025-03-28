#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n);
    vector<int> trace(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    dp[0] = 1;
    trace[0] = -1;

    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        trace[i] = -1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
                trace[i] = j;
            }
        }
    }

    int max = dp[0];
    int end = 0;

    for (int i = 0; i < n; i++)
    {
        if (dp[i] > max)
        {
            max = dp[i];
            end = i;
        }
    }

    vector<int> res;

    while (end != -1)
    {
        res.push_back(a[end]);
        end = trace[end];
    }
    
    reverse(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    
}
