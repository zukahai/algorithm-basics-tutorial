#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = iTest * 2 + random(1, 10);
    if (n > 100) n = 100;

    string s = random_string(n, "12346789");

    if (random(0, 1) == 0) {
        s[random(0, n - 1)] = char((random(0, 1) * 5) + '0');
    }

    cout << s << endl;
    
}
