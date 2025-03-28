#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 3, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 4, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 5, lenAi: 9}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    vector<long long> a = random_vector(subtasks, iTest, testnum);

    for (int i = 0; i < a.size(); i++) {
        a[i] = random(-a[i], a[i]);
    }

    if (iTest % 2 == 0) {
        for (int i = 0; i < a.size(); i++) {
            a[i] = (a[i] / 2) * 2 + 1;
        }
    }

    cout << a.size() << endl;
    print_vector(a, cout);
    
}
