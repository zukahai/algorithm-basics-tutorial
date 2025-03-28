#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    long long n = iTest * 20;
    n = n * n * n * n + random(1, n);

    if (n > 10e12) n = 10e12 - random(10e11, 10e12);
    if (iTest < 10)
        n = iTest * 4 + random(1, 10);

    cout << n << endl;

    
}
