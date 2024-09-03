#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int n = 2 * iTest + random(1, 10);

    if (iTest >= testnum - 1)
        n = 100000;
    
    vector <int> a = random_vector(n, -100, 100);

    if (random(0, 2) == 0)
    {
        for (int i = 0; i < n; i++)
        {
            a[i] *= random(2, 5);
        }
    }


    cout << n << endl;
    print_vector(a, cout);
}
