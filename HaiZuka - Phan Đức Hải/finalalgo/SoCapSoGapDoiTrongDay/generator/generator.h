#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 50, lenN: 5, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 6, lenAi: 9}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == 49) {
        cout << "1000000" << '\n';
        for (int i = 0; i < 1000000; i++) cout << 0 << ' ';
        return;
    }

    if (iTest == 50) {
        cout << "1000000" << '\n';
        for (int i = 0; i < 500000; i++) cout << 1 << ' ';
        for (int i = 0; i < 500000; i++) cout << 2 << ' ';
        return;
    }

    vector<int> a = random_vector(subtasks, iTest, testnum);
    int n = a.size();
    for (int i = 0; i < n; i++) {
        if (random(0, 1)) a[i] = -a[i];
    }

    if (iTest <= 40) {
        for (int i = 0; i < n; i++) 
            if (a[i] == 0)
                a[i] = random(1, 100);
    } else {
        for (int i = 0; i < n; i++) 
            if (random(0, 10))
                a[i] = 0;
    }

    cout << n << '\n';
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}
