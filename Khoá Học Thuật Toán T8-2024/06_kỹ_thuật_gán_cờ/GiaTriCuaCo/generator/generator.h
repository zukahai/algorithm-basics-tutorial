#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int n = iTest * 2;
    if (iTest >= testnum - 1) {
        n = 1000000;
    }
    vector<int> a = random_vector(n, 1, 9);
    if (random(2) == 0) {
        a = random_vector(n, 0, 9);
    }
    cout << n << endl;
    print_vector(a, cout);
    
}
