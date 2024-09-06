#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int n = iTest * 2000 + random(1, 10);
    if (iTest < 10) n = iTest * 2;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        int j = random(i, n - 1);
        swap(a[i], a[j]);
    }

    if (random(0, 1) == 0) {
        for (int i = 0; i < n; i++)
        {
            int j = random(i, n - 1);
            a[j] = a[i];
        }
    } else if (random(0, 1) == 0) {
        for (int i = 0; i < n; i++)
        {
            int j = random(i, n - 1);
            int sum = a[i] + a[j];
            a[i] = random(1, sum - 1);
            a[j] = sum - a[i];
        }
    }

    cout << n << endl;
    print_vector(a, cout);
    
}
