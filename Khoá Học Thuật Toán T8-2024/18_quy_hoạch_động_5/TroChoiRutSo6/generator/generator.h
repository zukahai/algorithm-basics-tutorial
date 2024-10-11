#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

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

    long long n = stoll(s) + 2;

    if (iTest >= testnum - 20)
    {
        n = 1e5- random(1, 100);
    }

    n *= random(4, 5);

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

    

    int m = random(0, 1);
    int kk = random(1, 3);
    int index = n;
    while (index > 1 && dp[index] != m) index --;

    if( random(0, 1)) {
        cout << index;
    } else {
        index = n / kk + 2;
        while (isPrime(index)) index--;
        index *= kk;
    cout << index;
    }
}
