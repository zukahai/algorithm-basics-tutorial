#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    dp[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        dp[i] = a[i];
        for (int j = 0; j <= i - 2; j++)
        {
            if ( dp[i] < dp[j] + a[i])
            {
                dp[i] = dp[j] + a[i];
            }
        }
    }

    int max = 0;
    int end = 0;

    for (int i = 0; i < n; i++)
    {
        if (dp[i] > max)
        {
            max = dp[i];
            end = i;
        }
    }

    cout << max << endl;
}
