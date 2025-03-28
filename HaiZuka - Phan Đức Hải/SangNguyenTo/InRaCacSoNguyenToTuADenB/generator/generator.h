#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 4, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 7, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum) {
        cout << "1 10000000" << endl;
        return;
    }
    int n = random(subtasks, iTest, testnum);
    int a = random(1, n / 10);
    if (a <= 1) a = 1;
    int b = a + random(n/2+1, n);

    cout << a << " " << b << endl;
    
}
