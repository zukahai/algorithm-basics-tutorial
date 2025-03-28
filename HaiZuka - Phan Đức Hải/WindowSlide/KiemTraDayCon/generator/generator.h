#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 50, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 6, lenAi: 9}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == 1) {
        cout << "5 2" << endl;
        cout << "4 5 4 5 4" << endl;
        return;
    }

    if (iTest == testnum) {
        cout << "1000000 500000" << endl;
        for (int i = 0; i < 1000000; i++) 
            cout << 1000000000 << " ";
        return;
    }

    if (iTest == testnum - 1) {
        cout << "1000000 500000" << endl;
        for (int i = 0; i < 1000000; i++) 
            cout << i << " ";
        return;
    }

    vector<int> a = random_vector(subtasks, iTest, testnum);
    int n = a.size();
    int k = random(n/3, n/2);
    k = (k == 0) ? 1 : k;
    cout << n << " " << k << endl;
    for (int i = 0; i < n; i++) 
        if (random(0, 5) == 0)
            cout << -a[i] << " ";
        else cout << a[i] << " ";

    
}
