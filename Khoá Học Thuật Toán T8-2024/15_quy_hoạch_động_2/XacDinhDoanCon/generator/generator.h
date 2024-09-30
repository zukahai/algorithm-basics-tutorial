#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = (iTest * 50) + random(1, iTest * 50);
    vector<long long> a = random_vector(n, 1ll * iTest * 50 + iTest);
    cout << n << endl;
    print_vector(a, cout);
    cout << endl;

    int s = random(0, n - 1);
    int l = random(0, n - s);
    int e = s + l - 1;

    int s2 = random(0, n - 1);
    int l2 = random(0, n - s2);
    int e2 = 2 + l - 1;

    int s3 = random(0, n - 1);
    int l3 = random(0, n - s3);
    int e3 = s3 + l3 - 1;

    cout << s << " " << e << endl;
    cout << s2 << " " << l2 << endl;
    cout << e3 << " " << l3 << endl;

    
}
