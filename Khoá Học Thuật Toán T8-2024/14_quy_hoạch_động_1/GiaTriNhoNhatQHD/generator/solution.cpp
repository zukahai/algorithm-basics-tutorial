#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector <int> dp(n, 0);
    dp[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = min(dp[i - 1], a[i]);
    }
    int q, k;
    cin >> q;
    while (q--)
    {
        cin >> k;
        cout << dp[k] << endl;
    }

    
}
