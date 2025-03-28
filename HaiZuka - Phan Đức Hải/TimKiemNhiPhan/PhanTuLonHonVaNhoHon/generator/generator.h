#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 50, lenN: 3, lenAi: 3}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 5, lenAi: 5}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    if (iTest == testnum) {
        cout << 3 << endl;
        cout << 2 << " " << 2 << " " << 2 << endl;
        cout << 3 << endl;
        cout << 1 << endl << 2 << endl << 3 << endl;
        return;
    }

    vector<long long> a = random_vector(subtasks, iTest, testnum);
    for (int i = 0; i < a.size(); i++) {
        if (random(0, 5) == 0) {
            a[i] = -a[i];
        }
    }
    sort(a.begin(), a.end());
    int q = a.size() - random(1, 10);
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << q << endl;
    for (int i = 0; i < q; i++) {
        if (random(0, 1) == 0) {
            cout << random(2 * a[0], 2 * a[a.size() - 1]) << endl;
        } else if (random(0, 1) == 0){
            cout << a[random(0, a.size() - 1)] << endl;
        } else  if (random(0, 1) == 0){
            cout << a[0] - random(1, 10) << endl;
        } else {
            cout << a[a.size() - 1] + random(1, 10) << endl;
        }
    }
    
}
