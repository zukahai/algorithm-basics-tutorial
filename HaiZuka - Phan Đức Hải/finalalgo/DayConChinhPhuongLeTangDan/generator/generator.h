#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 50, lenN: 2, lenAi: 3}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 4, lenAi: 6}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == 49) {
        cout << 5 << endl;
        cout << "2 2 2 2 2" << " ";
        return;
    }

    if (iTest == 50) {
        cout << 10000 << endl;
        for (int i = 0; i < 10000; i++)
        {
            cout << 9 << " ";
        }
        return;
    }

    vector<int> a = random_vector(subtasks, iTest, testnum);

    for (int i = 0; i < a.size(); i++)
    {
        if (random(0, 10) == 1) {
            a[i] = -a[i];
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (random(0, 1) == 1) {
            a[i] = sqrt(abs(a[i])) / 2;
            a[i] = (2 * a[i] + 1) * (2 * a[i] + 1);
        }
    }

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
}
