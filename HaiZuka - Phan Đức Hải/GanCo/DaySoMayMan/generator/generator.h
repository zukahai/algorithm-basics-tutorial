#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 4, lenAi: 3}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 6, lenAi: 3}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    vector<int> a = random_vector(subtasks, iTest, testnum);

    if (iTest == testnum - 1) {
        cout << 10 << endl;
        for (int i = 0; i < 10; i++) {
            cout << 4 << " ";
        }
        return;
    }
    if (iTest == testnum) {
        cout << 10 << endl;
        for (int i = 0; i < 10; i++) {
            cout << 4 << " ";
        }
        return;
    }
    if (random(0, 1))
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = 4;
        if (random(0, 1))
            a[i] = 7;
    }

    cout << a.size() << endl;
    print_vector(a, cout);

    
}
