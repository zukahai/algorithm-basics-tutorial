#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = (iTest * 20) * (iTest * 20);
    if (iTest == testnum) n = 1e6;
    if (iTest < 10) n = iTest * 3;
    if (n > 1e6) n = 1e6;

    vector<long long> a = random_vector(n, 1ll * n * n * n);

    for (int i = 0; i < n; i++)
        if (random() % 2 == 0)
            a[i] = -a[i];
    for (int i = 0; i < n; i++)
        a[i] = a[random(n)];
    cout << n << endl;
    print_vector(a, cout);
    
}
