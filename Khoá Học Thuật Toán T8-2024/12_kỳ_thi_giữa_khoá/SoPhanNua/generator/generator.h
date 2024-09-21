#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    long long n = 1ll * (iTest * 2000) * (iTest * 2000);
    n += random(1, iTest);
    if (n >100000000000) n = 100000000000 - random(1, iTest);
    cout << n << endl;

    
}
