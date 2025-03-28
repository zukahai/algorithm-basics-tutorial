#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần 
    int n = iTest + 1 + random(1, 10);
    if (iTest >= testnum - 1) n = 1000000;
    vector<long long> a = random_vector(n, 1ll * (iTest * 20 + iTest) * (iTest * 20 + iTest));

    for (int i = 0; i < n; i++) {
        if (random(3) == 0)
            a[i] = -a[i];
    }


    cout << n << endl;
    print_vector(a, cout);

}
