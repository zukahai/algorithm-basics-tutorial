#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

vector<long long> ssnt() {
    vector<long long> snt;
    snt.push_back(2);
    snt.push_back(3);
    snt.push_back(5);
    snt.push_back(7);

    int index = 0;
    while (index < snt.size())
    {
        int cur = snt[index];
        for (int i = 1; i <= 9; i += 2)
        {
            long long next = cur * 10 + i;
            if (isPrime(next))
                snt.push_back(next);
        }
        index++;

    }
    return snt;
}

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector <int> lensub = {1, 2, 6};

    vector<long long> vA = ssnt();

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
        n = 1000000;
    }




    vector<long long> a = random_vector(n,1ll* -n, 1ll* n);

    for (int i = 1; i < n; i++)
    {
        if (random(0, 1)) {
            a[i] = vA[random(0, vA.size() - 1)];
        }
    }
    if (iTest >= testnum - 3) {
        for (int i = 1; i < n; i++)
            a[i] = vA[random(0, vA.size() - 1)];
    }

    if (iTest== testnum) {
        cout << 1 << endl;
        cout << 1000000000000000000 << endl;
        return;
    }

    cout << n << endl;
    print_vector(a, cout);
}
