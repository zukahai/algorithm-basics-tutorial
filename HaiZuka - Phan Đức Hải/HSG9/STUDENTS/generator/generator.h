#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 20, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 20, lenN: 3, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
    {percent: 40, lenN: 5, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới
    if (iTest == testnum) {
        cout << 100000 << " " << 100 << endl;
        for (int i = 0; i < 100000; i++) {
            cout << 1000000000 << " ";
        }
        return;
    }


    int n = random(subtasks, iTest, testnum);
    vector<int> vec;
    int k = 2;
    if (iTest <= 10) {
        k = 2;
    } else {
        k = random(2, n);
    } 

    for (int i = 0; i < n; i++) {
        vec.push_back(random(1, n));
    }

    for (int i = 0; i < n; i++) {
        if (random(1, 100) <= 50) {
            vec[i] = vec[random(0, n - 1)];
        }
    }

    cout << n << " " << k << endl;
    print_vector(vec, cout);
}
