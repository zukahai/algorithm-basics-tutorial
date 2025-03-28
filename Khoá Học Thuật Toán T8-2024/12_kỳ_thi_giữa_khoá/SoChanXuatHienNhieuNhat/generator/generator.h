#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int N = iTest * 2000;
    int n = random(N / 10, N);
    if (iTest < 10) {
        n = 2 * iTest;
    }

    vector <int> a = random_vector(n, -100000, 1000000000);

    for (int i = 0; i < a.size(); i++) {
        a[random(0, a.size() - 1)] = a[random(0, a.size() - 1)];
    }

    if (random(0, 3) == 0) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] > 0)
                a[i] = -a[i];
        }
    }

    if (iTest % 10 == 0) {
        for (int i = 0; i < a.size(); i++) {
            a[i] = (a[i] / 2) * 2 + 1;
        }
    }

    if (iTest == testnum) {
        cout << 5 << endl;
        cout << "3 0 0 3 1";
        return;
    }

    cout << n << endl;
    if (iTest == testnum - 2) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[0] << " ";
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }

    
}
