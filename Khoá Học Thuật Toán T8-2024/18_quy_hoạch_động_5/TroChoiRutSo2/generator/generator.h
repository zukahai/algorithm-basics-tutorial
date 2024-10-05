#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

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

    int n = stoi(s);
    if (n > 1e4) n = 10e4;

    if (iTest >= testnum - 10)
    {
        n = 1e4 - random(1, 100);
    }

    int k1 = random(1, n);
    if (random(0, 3) == 0) {
        k1 += n;
    }


    if (random(0, 1) == 1)
    {
        n = ((n + k1) / (k1 + 1)) * (k1 + 1);
    }

    
    cout << n << " " << k1;
}
