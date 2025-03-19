#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 50, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 9, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == 1) {
        cout << "4 6 6" << endl;
        return;
    }

    if (iTest == 2) {
        cout << "100 1 500" << endl;
        return;
    }

    if (iTest == 48) {
        cout << "1000000 1000000 33554432" << endl;
        return;
    }

    if (iTest == 49) {
        cout << "1000000 1000000 1000000000000" << endl;
        return;
    }

    if (iTest == 50) {
        cout << "1000000 1000000 1" << endl;
        return;
    }


    if (iTest <= 25) {
        int n = random(subtasks, iTest, testnum);
        int m = random(subtasks, iTest, testnum);
        int k = random(subtasks, iTest, testnum);
        cout << n << " " << m << " " << k << endl;
    } else {
        int n = random(subtasks, iTest, testnum);
        int m = random(subtasks, iTest, testnum);
        int k = random(subtasks, iTest, testnum);
        k *= random(10, 1000);
        cout << n << " " << m << " " << k << endl;
    }
    
}
