#include<bits/stdc++.h>
using namespace std;

bool isCp(int n)
{
    if (n < 0)
        return false;
    int x = sqrt(n);
    return x * x == n;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n, 0);
    vector<int> trace(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    trace[0] = -1;
    dp[0] = (isCp(a[0])) ? 1 : 0;

    for (int i = 1; i < n; i++)
    {
        trace[i] = -1;
        if (isCp(a[i]))
        {
            dp[i] = 1;
        }
        for (int j = 0; j < i; j++)
        {
            if (isCp(a[i]))
            {
                if (a[i] > a[j] && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    trace[i] = j;
                }
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

    if (max == 0)
    {
        cout << -1;
        return 0;
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
