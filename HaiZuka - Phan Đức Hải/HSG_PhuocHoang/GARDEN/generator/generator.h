#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 60, lenN: 3, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 40, lenN: 9, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    int n = random(subtasks, iTest, testnum);

    if (iTest % 5 == 0) {
        while (n--) {
            if (isPrime(n))
                break;
        }
    }

    cout << n << endl;
}
