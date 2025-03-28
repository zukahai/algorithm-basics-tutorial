#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 3, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 5, lenAi: 9}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == 50) {
        cout << 5 << " " << 5 << endl;
        cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
        cout << 6 << " " << 7 << " " << 8 << " " << 9 << " " << 10 << endl;
        return;
    }

    if (iTest == 49) {
        cout << 100000 << " " << 100000 << endl;
        for (int i = 1; i <= 100000; i++) cout << i << " ";
        cout << endl;
        for (int i = 1; i <= 100000; i++) cout << i << " ";
        return;
    }

    vector<long long> a = random_vector(subtasks, iTest, testnum);
    vector<long long> b = random_vector(subtasks, iTest, testnum);
    cout << a.size() << " " << b.size() << endl;
    print_vector(a, cout);
    cout << endl;
    print_vector(b, cout);
    
}
