#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, k;
    cin >> n >> k;
    vector <bool> dp(n + 1);
    dp[0] = false;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = false;
        for (int j = max(0, i - k); j < i; j++) {
            if (dp[j] == false) {
                dp[i] = true;
                break;
            }
        }
    }

    cout << (dp[n] ? "Hai" : "Linh");

    
}
