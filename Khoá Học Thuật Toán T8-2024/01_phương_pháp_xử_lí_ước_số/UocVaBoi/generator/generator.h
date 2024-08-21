#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    if (iTest == testnum) {
        cout << 34359738368 << " " << 2;
        return;
    }

    if (iTest == testnum - 1) {
        cout << 1000000000000 << " " << 1000000000000;
        return;
    }

    long long maxI = 1e8;

    long long a = testnum * testnum;

    long long min = (iTest - 1) * (iTest - 1) * maxI / a + 1;
    long long max = iTest * iTest * maxI / a;

    long long A = random(min, max);
    long long c = maxI / A;

    long long B = A * random(1, 10000);
    if (random(2) == 0) {
        long long k = random(1, 100);
        B = A * k * k;
    }

    if (random(7) == 0) {
        cout << A << " " << B;
        return;
    }
    cout << B << " " << A;

    
}
