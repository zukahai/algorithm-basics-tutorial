#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    long long l = (iTest - 1) * 20;
    long long r = iTest * 20;
    int n = random(l, r);
    int m = n;
    if (random(3) > 0) {
        m = n - random(1, n);
    }
    if (n == 0) n = 1;
    if (m == 0) m = 1;

    cout << random_string(1, "123456789") << random_string(n - 1, "0123456789") << endl;
    cout << random_string(1, "123456789") << random_string(m - 1, "0123456789") << endl;

    
}
