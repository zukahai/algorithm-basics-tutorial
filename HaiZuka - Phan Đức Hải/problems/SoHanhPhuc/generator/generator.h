#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector <int> lensub = {1, 2, 6};

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

    if (iTest <=10)
    {
        n = iTest * 2 + random(0, 2);
    }
    if (iTest >= testnum - 10)
    {
        n = 1e5- random(1, 100);
    }

    cout << n << endl;

    for (int i = 1; i <= n; i++)
    {
        int a = random(1, 9);
        int b = n * 100 - random(1, 100);
        a = abs(a) + 1;
        b = abs(b) + 1;
        if (a > b) swap(a, b);
        cout << a << " " << b << endl;
    }

}
