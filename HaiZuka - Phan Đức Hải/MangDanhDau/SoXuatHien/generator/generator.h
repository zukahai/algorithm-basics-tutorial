#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 70, lenN: 3, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 6, lenAi: 9}, //30% test có n <= 10^4, mỗi ai <= 10^6
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới
    if (iTest == testnum) {
        cout << "1 1000000" << endl;
        cout << 10 << endl;
        for (int i = 0; i < 1000000; i++) {
            cout << 10 << " ";
        }
        return;
    }

    vector<int> a = random_vector(subtasks, iTest, testnum);
    vector<int> b = random_vector(subtasks, iTest, testnum);

    cout << a.size() << " " << b.size() << endl;
    print_vector(a, cout);
    cout << endl;
    print_vector(b, cout);

    
}
