#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 4, lenAi: 3}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 6, lenAi: 7}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum) {
        cout << 1000000 << endl;
        for (int i = 0; i < 1000000; i++) {
            cout << 999983 << " ";
        }
        return;
    }
    vector<int> a = random_vector(subtasks, iTest, testnum);

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        if (random(0, 3) == 0) {
            cout << -a[i] << " ";
        } else {
            cout << a[i] << " ";
        }
    }
    
}
