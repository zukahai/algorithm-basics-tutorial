#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 40, lenN: 3, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 6, lenAi: 7}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 30, lenN: 6, lenAi: 9}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);

    if (iTest == testnum) {
        cout << 1 << endl;
        cout << 1000000000 << endl;
        return;
    }
    
    int n = random(subtasks, iTest, testnum);
    vector<int> a;
    int k = n / 2 + random(1, n / 2);
    if (iTest >= 35)
        k = random(-k, k);
    a.push_back(k);
    for (int i = 1; i < n; i++) {
        a.push_back(a.back() + 1);
    }

    random_shuffle(a.begin(), a.end());

    if (iTest % 10 != 0) {
        a[random(0, n - 1)] = a[random(0, n - 1)];
        a[random(0, n - 1)] = a[random(0, n - 1)];
        a[random(0, n - 1)] = a[random(0, n - 1)];
    }

    cout << n << endl;
    print_vector(a, cout);

    
}
