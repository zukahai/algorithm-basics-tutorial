#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    if (iTest == 1) {
        cout << "2 1";
        return;
    }

    if (iTest == 2) {
        cout << "2 3";
        return;
    } 

    if (iTest == testnum) {
        cout << "1000000 1000000";
        return;
    } 

    int n = 20 * iTest;
    int a = random(n / 10 +1, n + 1);
    int b = random(n / 10 +1, n + 1);
    cout << a << " " << b;
    
}
