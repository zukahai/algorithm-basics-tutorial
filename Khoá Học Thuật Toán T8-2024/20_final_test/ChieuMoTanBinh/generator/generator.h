#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int n = iTest * 2 + random(1, 3);
    if (n > 100) n = 100;

    vector<int> a(n);

    int k = 1000000000 - random(1, 100);
    if (iTest <= 20) {
        k = 10000 - random(1, 100);
    }

    a[0] = k;
    for (int i = 1; i < n; i++) {
        a[i] = a[i - 1] - random(1, 10);
    }

    cout << n << endl;
    print_vector(a, cout);
    
}
