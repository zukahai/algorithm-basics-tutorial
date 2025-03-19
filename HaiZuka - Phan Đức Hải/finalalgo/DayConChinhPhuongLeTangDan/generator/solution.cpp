#include<bits/stdc++.h>
using namespace std;

bool isSquareOdd(int n)
{
    if (n < 0) return false;
    int x = sqrt(n);
    return x * x == n && x % 2 == 1;
}

int main()
{
    // Không phải online judge sẽ đọc file input.txt, output.txt
    #ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    #endif
    // Bài giải của bạn ở dưới đây
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> dp(n, 1);
    dp[0] = (isSquareOdd(a[0]) ? 1 : 0);
    for (int i = 1; i < n; i++)
    {
        if (isSquareOdd(a[i]))
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[j] <= a[i])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        } else {
            dp[i] = 0;
        }
    }

    int res = dp[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, dp[i]);
    }

    cout << res << endl;

}
