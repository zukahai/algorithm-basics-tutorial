#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = (iTest * 50) * (iTest * 50);
    if (iTest == testnum) n = 1e6;
    if (iTest < 19) n = iTest * 3;

    vector<int> a = random_vector(n, n);

    for (int i = 0; i < n; i++)
        a[i] = a[random(n)];
    cout << n << endl;
    print_vector(a, cout);
    
}
