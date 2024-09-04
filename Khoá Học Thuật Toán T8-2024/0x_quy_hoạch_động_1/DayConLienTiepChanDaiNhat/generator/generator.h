#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần 
    
    if (iTest == testnum) {
        cout << 1000000 << endl;
        for (int i = 0; i < 1000000; i++) {
            cout << random(1, 10) * 2 << " ";
        }
        return;
    }

    int n = (iTest * 50) + random(1, iTest * 50);
    n = n * n + random(1, n);
    if (n > 1000000) n = 1000000;
    vector<long long> a = random_vector(n, 1ll * (iTest * 20 + iTest) * (iTest * 20 + iTest));
    cout << n << endl;

    for (int i = 0; i < n; i++) {
        if (random(4) == 0)
            a[i] = -a[i];
    }

    for (int i = 1; i < n; i++) {
        if (random(4) > 0)
        a[i] *= 2;
    }

    if (random(3) == 0) {
        for (int i = 0; i < n; i++) {
            a[i] = (a[i] / 2) * 2 + 1;
        }
    }

    print_vector(a, cout);


    
}
