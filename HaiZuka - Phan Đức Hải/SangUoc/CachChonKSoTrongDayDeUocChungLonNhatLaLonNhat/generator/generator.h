#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 2, lenAi: 4}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 6, lenAi: 4}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum - 1) {
        cout << "5 3" << endl;
        cout << "5 5 5 5 5" << endl;
        return;
    }
    if (iTest == testnum - 2) {
        cout << "5 1" << endl;
        cout << "10000000 9 7 7 5" << endl;
        return;
    }
    if (iTest == testnum - 3) {
        cout << "5 2" << endl;
        cout << "10000000 999999 7 333333 5" << endl;
        return;
    }
    if (iTest == testnum - 5) {
        cout << "1000000 500000" << endl;
        cout << "999999 ";
        for  (int i = 1; i < 1000000; i++) {
            if (i % 2 == 0) cout << 10000000 << " ";
            else cout << 999999 << " ";
        }
        return;
    }
    

    vector<int> a = random_vector(subtasks, iTest, testnum);
    int n = a.size();

    int k = random(n/3, n);
    if (k <= 0) k = 1;

    if (iTest == testnum - 4) {
        k = n;
    }

    int x = random(1, n) + 1;
    for (int i = 0; i < k - 1; i++) {
        int index = random(0, n - 1);
        a[index] = (a[index] /x + 1) * x;
    }

    int y = random(1, x) + 1;
    for (int i = 0; i < k; i++) {
        int index = random(0, n - 1);
        a[index] = (a[index] /y + 1) * y;
    }

    cout << n << " " << k << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] < 1e7)
        cout << a[i] << " ";
        else cout << random(1, 1e7) << " ";
    }
    
}
