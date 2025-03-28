#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 1, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 5, lenAi: 9}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum) {
        cout << "3 1000000000" << endl;
        cout << "1000000000 1000000000 1000000000";
        return;
    }

    if (iTest == testnum - 1) {
        cout << "100 1000000000" << endl;
        for (int i = 0; i < 100; i++) {
            cout << "1000000000 ";
        }
        return;
    }

    if (iTest == testnum - 2) {
        cout << "100 1000000000" << endl;
        for (int i = 0; i < 100; i++) {
            cout << "1 ";
        }
        return;
    }

    vector<long long> a = random_vector(subtasks, iTest, testnum);

    for (int i = 0; i < a.size(); i++) {
        if (rand() % 2 == 0) {
            a[i] = random(1, sqrt(a[i]));
        }
    }

    cout << a.size() << " " << random(1, 1000000000) << endl;
    print_vector(a, cout);
    
}
