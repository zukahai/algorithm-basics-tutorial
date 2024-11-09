#include<bits/stdc++.h>
using namespace std;


vector <int> listUoc(int n)
{
    vector <int> res;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res.push_back(n / i);
            res.push_back(i);
        }
    }
    return res;
}

int main()
{
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int n;
    cin >> n;

    vector <string> dp(n + 1);
    dp[1] = "Win";
    for (int i = 2; i <= n; i++)
    {
        dp[i] = "Lose";
        vector <int> uoc = listUoc(i);
        for (auto x: uoc)
        {
            if (x != i) {
                if (dp[x] == "Lose")
                {
                    dp[i] = "Win";
                    break;
                }
            }
        }
    }

    if(dp[n]=="Win"){
        cout << "Hai";
    } else {
        cout << "Linh";
    }
    
}
