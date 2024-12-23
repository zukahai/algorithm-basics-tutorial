#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 70, lenN: 3, lenAi: 5}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 5, lenAi: 9}, //30% test có n <= 10^4, mỗi ai <= 10^6
};

vector <long long> gen(vector <long long> a, int yes) {
    if (yes == 1) {
        for (int i = 0; i < a.size() / 2; i++) {
            a[i] = a[a.size() - i - 1];
        }
    }
    return a;
}

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    vector<long long> a = random_vector(subtasks, iTest, testnum);
    a = gen(a, iTest % 2);

    cout << a.size() << endl;
    print_vector(a, cout);
    
}
