#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 4, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới
    if (iTest == testnum) {
        cout << 10000 << " " << 100 << endl;
        for (int i = 0; i < 10000; i++) {
            cout << 1000000000 << " ";
        }
        return;
    }


    int n = random(subtasks, iTest, testnum);
    vector<int> vec;
    int k = random(3, n);
    if (iTest <= 10) {
        k = 2;
    } else if (iTest <= 25){
        n = random(1, 10);
        k = random(1, n);
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
