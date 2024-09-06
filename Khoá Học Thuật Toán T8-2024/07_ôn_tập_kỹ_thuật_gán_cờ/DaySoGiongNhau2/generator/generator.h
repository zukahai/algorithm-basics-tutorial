#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    vector <int> a;
    int n = (iTest * 20) * (iTest * 20);
    if (n < 10) n = iTest * 2;
    if (n > 1000000) n = 1000000;
    a.resize(n);
    a = random_vector(n, 1, iTest);
    

    if (random(0, 2) == 0)
        for (int i = 0; i < n; i++)
            a[i] = a[0];
    
    if (random(0, 2) == 0) {
        a[random(0, n - 1)] = a[random(0, n - 1)] + random(-2, 2);
        if (random(0, 1) == 0) {
            a[random(0, n - 1)] = a[random(0, n - 1)] + random(-2, 2);
            if (random(0, 1) == 0) {
                a[random(0, n - 1)] = a[random(0, n - 1)] + random(-2, 2);
            }
        }
    }

    cout << n << endl;
    print_vector(a, cout);
}
