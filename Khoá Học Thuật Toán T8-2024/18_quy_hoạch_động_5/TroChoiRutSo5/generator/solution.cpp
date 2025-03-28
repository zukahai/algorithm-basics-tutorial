#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;

    vector<bool> snt(n + 1, true);
    snt[0] = snt[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (snt[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                snt[j] = false;
            }
        }
    }



    vector <bool> dp(n + 1);
    dp[0] = false;
    dp[1] = false;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = false;
        for (int j = 1; j <= i; j++) {
            if (snt[j] && dp[i - j] == false) {
                dp[i] = true;
                break;
            }
        }
    }

    cout << (dp[n] ? "Hai" : "Linh");
    
}
