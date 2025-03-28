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

    if (iTest == 49) {
        cout << "1000000" << " " << "999999999999999999" << endl;
        for (int i = 0; i < 1000000; i++) cout << "1000000000 ";
        return;
    }

    if (iTest == 50) {
        cout << "1000000" << " " << "10" << endl;
        for (int i = 0; i < 1000000; i++) cout << "1 ";
        return;
    }

    vector <int> a = random_vector(subtasks, iTest, testnum);
    int n = a.size();
    int maxA = *max_element(a.begin(), a.end());

    long long k = random(maxA / 2, maxA * maxA + random(1, 10));

    

    cout << n << " " << k << endl;
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    
}
