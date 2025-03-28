#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

#define m 1000000007

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    if (iTest == testnum) {
        cout << 100 << endl;
        for (int i = 1; i <= 100; i++) {
            cout << i << " " << 1000000000000000000 << endl;
        }
        return;
    }
    
    int t = iTest * 2 + 2;
    if (t > 100) t = 100;

    cout << t << endl;
    while (t--)
    {
        long long l = (long long) (20000 * (iTest - 1)) * (long long) (20000 * (iTest - 1)) + 1;
        long long r = (long long) (20000 * iTest) * (long long) (20000 * iTest);
        long long d = random(l, r);
        long long a = r;
        long long b = r + d;
        if (random(0, 4) == 0) swap(a, b);
        cout << a << " " << b << endl;
    }
    
    
}
