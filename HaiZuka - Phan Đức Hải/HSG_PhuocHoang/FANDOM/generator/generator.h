#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 2}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 20, lenN: 2, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 20, lenN: 3, lenAi: 9}, //50% test có n <= 10^6, mỗi ai <= 10^18
    {percent: 40, lenN: 6, lenAi: 9},
};

bool isPrime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}


long long next(long long x) {
    long long k;
    if (x <= 0)
        k = 1;
    else
        k = sqrt(x) + 1;
    while (isPrime(k) == false && k > 0)
        k++;
    return k * k;
}


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum) {
        cout << 1000000 << " " << 1000000 << endl;
        for (int i = 1; i <= 1000000; i++)
            cout << 4 << " ";
        return;
    }

    if (iTest == testnum - 1) {
        cout << 1000000 << " " << 1 << endl;
        for (int i = 1; i <= 1000000; i++)
            cout << 4 << " ";
        return;
    }


    vector <int> a = random_vector(subtasks, iTest, testnum);
    int n = a.size();
    int k = random(1, n / 2 + 1);

    for (int i = 0; i < a.size(); i++) {
        if (random(1, 4) > 1)
            a[i] = next(a[i]);
    }
        

    cout << n << " " << k << endl;
    print_vector(a, cout);

    
}
