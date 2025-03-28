#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    if ((float)iTest / testnum <= 0.3) {
        cout << random_string(1, "123456789") + random_string(4, "0123456789") + "\n";
    } else if ((float)iTest / testnum <= 0.6) {
        cout << random_string(1, "123456789") + random_string(16, "0123456789") + "\n";
    } else {
        cout << random_string(1, "123456789") + random_string(99, "0123456789") + "\n";
    }
    
}
