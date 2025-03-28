#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = iTest * 20000 + random(1, 10);
    if (n > 100000) n = 100000;

    vector <int> a(n);
    a[0] = random(1, iTest);

    for (int i = 1; i < n; i++)
    {
        a[i] = random(-2, 2) + a[i - 1];
    }

    if (random(0, 2) == 0)
    {
        for (int i = 0; i < n; i++)
        {
            a[i] -= random(1, 4);
        }
    }

    cout << n << endl;
    print_vector(a, cout);
    
}
