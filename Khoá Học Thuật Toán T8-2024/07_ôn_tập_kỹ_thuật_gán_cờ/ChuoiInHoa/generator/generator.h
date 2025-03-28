#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = iTest * 20 + random(1, 10);

    if (random(0, 1)) {
        cout << random_string(n, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") << endl;
    } else {
        cout << random_string(n, 10) << endl;
    }
    
}
