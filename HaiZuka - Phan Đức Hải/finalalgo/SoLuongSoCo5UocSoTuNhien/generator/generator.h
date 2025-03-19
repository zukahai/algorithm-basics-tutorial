#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 50, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 18, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == 1) {
        cout << "10 20";
        return;
    }

    if (iTest == 2) {
        cout << "80 90";
        return;
    }

    if (iTest == 49) {
        cout << "1 1";
        return;
    }

    if (iTest == 50) {
        cout << "1 1000000000000000000";
        return;
    }

    int b = random(subtasks, iTest, testnum);
    int a = random(1, b);
    if (a > b) swap(a, b);
    cout << a << " " << b;
}
