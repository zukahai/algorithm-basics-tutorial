#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int l = (20 * (iTest - 1));
    int r = (20 * iTest);
    l *= l;
    int n = random(l, r);
    r *= r;
    if (n > 100000)
        n = 100000;
    vector<long long> a = random_vector(n, 1ll, (long long) (20 * iTest) * (20 * iTest) );
    cout << n << endl;
    print_vector(a, cout);
    
}
