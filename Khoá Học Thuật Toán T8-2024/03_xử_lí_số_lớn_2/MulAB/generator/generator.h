#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    if ((double)iTest / testnum <= 0.4) {
        string s = random_string(1, "123456789");
        s  += random_string(random(1, 7), "0123456789");
        cout << s << endl;

        string p = random_string(1, "123456789");
        p += random_string(random(1, 7), "0123456789");
        cout << p << endl;
    } else {
        // Sinh test cho phần 2
        int n = 20 * iTest;
        string s = random_string(1, "123456789");
        s  += random_string(n - 1, "0123456789");
        cout << s << endl;

        string p = random_string(1, "123456789");
        p += random_string(n - 1, "0123456789");
        cout << p << endl;
    }
    
}
