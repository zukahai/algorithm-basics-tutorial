#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

bool isCp(int n)
{
    if (n < 0)
        return false;
    int x = sqrt(n);
    return x * x == n;
}

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector <int> lensub = {1, 2, 4};

    string s = "";
    int k = 1;

    if (iTest * 100 < testnum * 20)
    {
        k = 0;
        
    }
    else if (iTest * 100 < testnum * 40)
    {
        k = 1;
    } else {
        // Sinh test ngẫu nhiên
       k = 2;
    }

    int len = lensub[k] * (iTest * 1.0 / testnum);
    if (len == 0) len = 1;

    s = random_string(1, "123456789") + random_string(len, "0123456789");
   
    int n = stoi(s);

    if (iTest >= testnum - 10)
    {
        n = 10000;
    }

     if (iTest < 5) {
        n = iTest + 1;
    }


    vector<int> a = random_vector(n, -n, n);
    for (int i = 0; i < n; i++) {
        if (random(0, 1)) {
            int k = sqrt(a[random(0, i)]) + random(1, 10);
            a[i] = k * k;
        }
    }

    if (iTest >= testnum - 1) {
        for (int i = 0; i < n; i++) {
            a[i] = i * i;
        }
    }

    if (iTest % 10 == 0) {
        for (int i = 0; i < n; i++) {
            while(isCp(a[i])) {
                a[i] = random(-n, n);
            }
        }
    }

    

    cout << n << endl;
    print_vector(a, cout);
}

