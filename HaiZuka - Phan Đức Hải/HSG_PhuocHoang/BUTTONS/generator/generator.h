#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 30, lenN: 1, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 70, lenN: 5, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    int n = random(subtasks, iTest, testnum);
    n = max(n, 2LL);
    int m = random(1, n / 2);

    string p = "abcdefghijklmnopqrstuvwxyz";
    if (iTest <= 10) p = "abc";
    if (iTest == testnum) p = "a";
    string s = random_string(m, p);
    string h = "";
    for (int i = 0; i < n / m; i++) 
    {
        h += s;
    }

    for (int i = 0; i < h.size(); i++) 
    {
        int x = random(0, h.size() - 1);
        int y = random(0, h.size() - 1);
        swap(h[x], h[y]);
    }

    cout << h;
}
