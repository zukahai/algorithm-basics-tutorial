#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    if (iTest < 10)
    {
        cout << iTest + 1;
        return;
    }

    vector <int> lensub = {1, 2, 4};

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

    long long n = stoll(s);

    if (iTest >= testnum - 10)
    {
        n = 1e4- random(1, 100);
    }


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

    int m = random(0, 1);
    int index = n;
    while (index > 1 && dp[index] != m) index --;
    cout << index;
}
