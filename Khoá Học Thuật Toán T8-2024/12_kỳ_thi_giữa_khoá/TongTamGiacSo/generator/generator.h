#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    long long N = (long long) (iTest * 2000) * (iTest * 2000);
    if (N > 1000000000) N = 1000000000;
    long long n = random(N / 10, N);

    if (iTest < 20) {
        n = 2 * iTest * iTest;
    }

    cout << n;
    
}
