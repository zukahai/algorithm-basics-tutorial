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

    vector <int> a = random_vector(n, 0, 100);

    for (int i = 0; i < a.size(); i++) {
        a[random(0, a.size() - 1)] = a[random(0, a.size() - 1)] * 2;
    }

    if (iTest == testnum) {
        cout << 5 << endl;
        cout << "0 0 0 0 0";
        return;
    }

    if (iTest == testnum - 3) {
        cout << 100000 << endl;
        for (int i = 1; i <= 100000/2; i++) {
            cout << 1000000000 << " ";
        }
        for (int i =  1; i <= 100000 / 2; i++) {
            cout << 1000000000/2 << " ";
        }
        return;
    }

    cout << n << endl;
    if (iTest < testnum - 2) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout << (i / (n / 2)) + 1 << " ";
        }
    }

    
}
