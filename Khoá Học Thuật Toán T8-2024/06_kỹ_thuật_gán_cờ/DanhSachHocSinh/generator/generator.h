#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int s = random(1, 10) + iTest * 10;
    if (iTest >= testnum - 1) 
    {
        s = 200000;
    }
    vector <int> a(s);
    for (int i = 0; i < s; i++)
    {
        a[i] = i + 1;
    }
    
    for (int i = 0; i < s; i++) {
        int index1 = random(0, s - 1);
        int index2 = random(0, s - 1);
        
        int tmp = a[index1];
        a[index1] = a[index2];
        a[index2] = tmp;
    }

    int m = random(1, s - 1);
    int n = s - m;

    if (iTest >= testnum - 1)
    {
        m = 100000;
        n = 100000;
    }

    vector <int> b(m), c(n);
    for (int i = 0; i < m; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i + m];
    }

    if (random(0, 4) > 0)
    {
        for (int i = 0; i < m; i++)
        {
            if (random(0, 2) == 0)
            {
                b[i] = c[random(0, n - 1)];
            }
        }
    }

    unordered_map <int, int> B;

    for (int i = 0; i < m; i++)
    {
        B[b[i]] ++;
    }
    
    cout <<  B.size() << " " << n << endl;
    
    for (auto x : B)
    {
        if (B[x.first] > 0)
        {
            cout << x.first << " ";
            B[x.first] = 0;
        }
    }
    cout << endl;
    print_vector(c, cout);

    
}
