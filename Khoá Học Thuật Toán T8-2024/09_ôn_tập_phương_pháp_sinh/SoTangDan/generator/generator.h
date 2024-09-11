#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    long long n = iTest * 20;

    n = n * n * n * n * n;

    n += random(1, n);
    if (iTest < 10)
        n = iTest * 3 + random(1, 10);
    if (iTest == testnum)
        n = 1e18;

    cout << n << endl;
    
}
