#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

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
        cout << iTest;
        return;
    }

    vector <int> lensub = {1, 4, 18};

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

    if (iTest >= testnum - 10)
    {
        n = 1e18- random(1, 1e17);
    }

    if (iTest == testnum)
    {
        n = 1e18;
    }

    vector <long long> ssnt = {2, 3, 5, 7};

    int index = 0;
    while (index < ssnt.size())
    {
        long long tmp = ssnt[index];
        for (int i = 1; i <= 9; i += 2)
        {
            long long n = tmp * 10 + i;
            if (isPrime(n))
            {
                ssnt.push_back(n);
            }
        }
        index++;
    }

    if (iTest % 10 == 0)
    {
        int index = random(0, ssnt.size() - 2);
        n = (ssnt[index] + ssnt[index + 1]) / 2;
    }

    if (iTest == testnum - 1)
    {
        int index = ssnt.size() - 2;
        n = (ssnt[index] + ssnt[index + 1]) / 2;
    }

    cout << n;

}
