#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 50, lenN: 3, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 50, lenN: 6, lenAi: 8}, //30% test có n <= 10^4, mỗi ai <= 10^6
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới
    if (iTest == testnum) {
        cout << 1000000 << " " << 4 << endl;
        for (int i = 0; i < 1000000; i++) {
            cout << 2 << " ";
        }
        return;
    }
    vector<long long> a = random_vector(subtasks, iTest, testnum);
    for (int i = 0; i < a.size(); i++) {
        if (rand() % 2 == 0) {
            a[i] = -a[i];
        }
    }

    int s = a[random(0, a.size() - 1)];

    for (int i = 0; i < a.size(); i++) {
        a[i] = s - a[random(0, a.size() - 1)];
    }

    cout << a.size() << " " << s << endl;
    print_vector(a, cout);

    
}
