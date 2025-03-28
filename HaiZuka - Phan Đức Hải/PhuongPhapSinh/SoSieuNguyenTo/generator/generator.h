#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần 
    long long space[10] = {100, 1000, 10000, 100000, 1000000, 10000000,   
    1000000000000, 10000000000000, 100000000000000, 100000000000000000};
    long long sp = space[(iTest - 1) / 10];
    long long a = random(iTest * 10);
    long long b = a  + sp + random(sp);

    if (iTest == testnum)
    {
        a = 1;
        b = 1000000000000000000;
    }
    cout << a << " " << b << endl;
}
