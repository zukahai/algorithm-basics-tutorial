#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 30, lenN: 5, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 70, lenN: 12, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới
    if (iTest <= 3) {
        cout << random(10, 20) * iTest;
        return;
    }

    if (iTest == testnum) {
        cout << 1000000000000;
        return;
    }
    int n = random(subtasks, iTest, testnum);
    cout << n << endl;
    
}
