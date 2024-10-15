#include<bits/stdc++.h>
#include "../lib/library.h"
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

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    if (iTest < 10)
    {
        cout << iTest + 1;
        return;
    }

    vector <int> lensub = {1, 4, 5};

    string s = "";
    int k = 1;

    if (iTest * 100 < testnum * 20)
    {
        k = 0;
        
    }
    else if (iTest * 100 < testnum * 40)
    {
        k = 1;
    } else {
        // Sinh test ngẫu nhiên
       k = 2;
    }

    int len = lensub[k] * (iTest * 1.0 / testnum);
    if (len == 0) len = 1;

    s = random_string(1, "123456789") + random_string(len - 1, "0123456789");

    long long n = stoll(s) + 2;

    if (iTest >= testnum - 20)
    {
        n = 1e6- random(1, 100);
    }


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


    

    int m = random(0, 1);
    int index = n;
    while (index > 1 && dp[index] != m) index --;
    cout << index;
}
