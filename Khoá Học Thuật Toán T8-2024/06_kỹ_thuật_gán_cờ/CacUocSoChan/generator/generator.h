#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    long long n = 100 * iTest + random(1, 10);

    if (iTest >= testnum - 1) {
        n = 1000000000000 + random(1, 1000000000);
    } 
    

    if (random(0, 2) == 0) {
        long long k = 1;
        while (k < n) {
            k *= (random(1, 100) * 2 + 1);
        }
        cout << k << endl;
        return;

    }
    cout << n << endl;
}
