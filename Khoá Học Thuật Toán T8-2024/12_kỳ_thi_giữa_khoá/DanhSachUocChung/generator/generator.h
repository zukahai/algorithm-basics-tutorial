#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector <int> lensub = {3, 6, 12};

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

    s = random_string(1, "123456789") + random_string(len, "0123456789");
    string p = random_string(1, "123456789") + random_string(len, "0123456789");
    if (iTest == testnum - 1)
    {
        s = "1000000007";
        p = "2000000014";
    }

    if (iTest == testnum)
    {
        s = "1000000000000";
        p = "1000000000000";
    }

    long long a = stoll(s);
    long long b = stoll(p);

    int kk = random(2, 2 + iTest);
    a = a * kk;
    b = b * kk;

    cout << a << " " << b;
}
