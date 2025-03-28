#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector <bool> dp(n + 1);
    dp[0] = false;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = false;
        for (int j = 1; j * j <= i; j++) {
            if (dp[i - j * j] == false) {
                dp[i] = true;
                break;
            }
        }
    }

    cout << (dp[n] ? "Hai" : "Linh");
    
}
