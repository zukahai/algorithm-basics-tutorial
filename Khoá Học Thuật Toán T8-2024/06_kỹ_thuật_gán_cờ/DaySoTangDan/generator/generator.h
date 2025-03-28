#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    vector <int> a;
    int n = 2 * iTest + random(1, 10);

    if (iTest >= testnum - 1) {
        n = 1000000;
        a = random_vector(n, -1000000000, 1000000000);
    } else {
        a = random_vector(n, -100, 100);
    }
    

    if (random(0, 2) == 0)
        for (int i = 1; i < n; i++)
            a[i] = a[i - 1] + random(1, 10);

    cout << n << endl;
    print_vector(a, cout);
}
