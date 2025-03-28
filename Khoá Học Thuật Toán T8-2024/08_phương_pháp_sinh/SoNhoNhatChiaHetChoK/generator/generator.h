#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    long long k = iTest * 200 + random(1ll, iTest);
    k = k * k * k;
    long long n = random(1ll, 1e18);
    if (iTest == testnum)  {
        k = 1e18;
        n = 1;
    }
    if (iTest < 10)
        k = iTest;

    cout << n << endl << k << endl;
    
}
