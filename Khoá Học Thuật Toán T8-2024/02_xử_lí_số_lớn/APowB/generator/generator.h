#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

#define m 1000000007

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    if (iTest == 1) {
        cout << "2 3";
    } else if (iTest == 2) {
        cout << "3 2";
    } else
    if (iTest == testnum) {
        cout << 1 << " " << 1000000000000000000;
    } else if (iTest == testnum - 1) {
        cout << 0 << " " << 1000000000000000000;
    } else {
        long long l = (long long) (20000 * (iTest - 1)) * (long long) (20000 * (iTest - 1)) + 1;
        long long r = (long long) (20000 * iTest) * (long long) (20000 * iTest);
        long long d = random(l, r);
        cout << random(l, r) << " " << random(l, r);
    }


    
    
}
