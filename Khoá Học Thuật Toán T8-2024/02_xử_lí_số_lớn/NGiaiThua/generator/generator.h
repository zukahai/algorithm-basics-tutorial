#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    if (iTest == testnum) {
        cout << 0;
        return;
    }

    long long l = (iTest - 1) * 20;
    l = l * l + 1;
    long long r = iTest * 20;
    r = r * r + 1;
    if (r < l) swap(l, r);
    if (r >= 1000000) r = 1000000;
    cout << random(l, r);
    
}
