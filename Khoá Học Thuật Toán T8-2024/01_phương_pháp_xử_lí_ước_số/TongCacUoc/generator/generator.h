#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    long long k = random((iTest - 1) * 2000000000, iTest * 2000000000);
    if (random(1, 4) == 1) {
        cout << k + 1;
    } else {
        long long h = sqrt(k);
        cout << h * h + 1;
    }
}
