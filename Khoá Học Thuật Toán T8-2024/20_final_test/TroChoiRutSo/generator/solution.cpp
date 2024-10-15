#include<bits/stdc++.h>
using namespace std;

vector <int> listDight(int n)
{
    vector <int> res;
    while (n > 0)
    {
        if (n % 10 != 0)
            res.push_back(n % 10);
        n /= 10;
    }
    return res;
}

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
        vector <int> uoc = listDight(i);
        for (auto x: uoc)
        {
            if (dp[i - x] == false)
            {
                dp[i] = true;
                break;
            }
        }
    }

    cout << (dp[n] ? "Hai" : "Linh");
    
}
