#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = (iTest * 2000) * (iTest * 2000);
    if (n > 100000) n = 100000 - random(1, iTest);

    if (iTest < 20)
        n = iTest;

    string s = random_string(n, "abcdefghijklmnopqrstuvwxyz");
    if (iTest == testnum) s = random_string(n, "a");
    cout << s << endl;
    
}
