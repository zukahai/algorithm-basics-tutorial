#include<bits/stdc++.h>
using namespace std;

vector <int> listUoc(int n)
{
    vector <int> res;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            if (i != n / i)
            {
                res.push_back(n / i);
            }
        }
    }
    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n = 1000;

    vector <bool> dp(n + 1);
    dp[1] = true;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = false;
        vector <int> uoc = listUoc(i);
        for (auto x: uoc)
        {
            if (x == i) continue;
            if (dp[x] == false)
            {
                dp[i] = true;
                break;
            }
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (dp[i])
        {
            cout << i << " ";
        }
    }
}
