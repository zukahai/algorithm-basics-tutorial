#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    long long k = iTest * 2000 + random(1ll, iTest);
    k = k * k * k;
    if (iTest == testnum)  {
        k = 1ll * 999999999 * 999999999 + 1;
    }
    if (iTest < 10)
        k = iTest;

    cout << k;
    
}
