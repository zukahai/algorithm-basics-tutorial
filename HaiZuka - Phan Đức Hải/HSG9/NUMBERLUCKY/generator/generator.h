#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 40, lenN: 4, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 60, lenN: 6, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum) {
        cout << "1 5000000";
        return;
    }

    int n = random(subtasks, iTest, testnum);
    int a = random(1, 10);
    int b = 5 * random(n / 2 + 1, n);
    a = max(a, 1LL);
    b = max(b, 1LL);
    if (a > b) swap(a, b);
    cout << a << " " << b << endl;

    
}
