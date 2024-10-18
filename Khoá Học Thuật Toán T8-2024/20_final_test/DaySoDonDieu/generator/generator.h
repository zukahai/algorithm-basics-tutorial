#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = iTest * 2000;
    vector <int> a = random_vector(n, 1, n);

    
    for (int i = 1; i < n; i++) {
        a[i] = a[i - 1] + random(0, 10);
    }
    if (random(0, 1)) {
        a[0] = a[1] = a[2];
        a[a.size() - 1] = a[a.size() - 2] = a[a.size() - 3];
    }

    if (random(0, 1)) {
        reverse(a.begin(), a.end());
    }

    if (random(0, 1)) {
        for (int i = 1; i <= n / 10; i++) {
            a[random(0, n - 1)] = a[random(0, n - 1)];
        }
    }

    cout << n << endl;
    print_vector(a, cout);
    
}
