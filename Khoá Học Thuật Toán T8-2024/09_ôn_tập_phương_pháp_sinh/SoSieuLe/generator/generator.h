#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = iTest * 20;

    n = n * n * n;
    n += random(0, 10);
    if (n > 100000000)
    {
        n = 100000000 - random(1, 100000);
    }
    if (iTest <= 10)
        n = iTest + random(0, 10);
    cout << n;
    
}
