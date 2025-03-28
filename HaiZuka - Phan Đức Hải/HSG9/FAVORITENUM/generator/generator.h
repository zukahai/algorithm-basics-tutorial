#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 1, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 9, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum) {
        cout << 1 << " " << 1 << " " << 1000000000000000000 << endl;
        return;
    }

    int x = random(subtasks, iTest, testnum);
    int y = random(subtasks, iTest, testnum);
    x = max(x, 1LL);
    y = max(y, 1LL);

    int lcm = x * y / __gcd(x, y);

    int n = random(subtasks, iTest, testnum);
    n = n * n + random(subtasks, iTest, testnum);

    if (iTest < 10) 
        n = lcm - 1;
    
    n = max(n, 1LL);

    cout << x << " " << y << " " << n << endl;
    
}
