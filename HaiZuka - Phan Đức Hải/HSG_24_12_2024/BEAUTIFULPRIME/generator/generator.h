#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 70, lenN: 4, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 9, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
};

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int gen(int n, int yes) {
    if (yes == 1) {
        while (isPrime(n) == false || (n - 1) % 5 != 0) {
            n++;
        }
    } else {
        while (isPrime(n) == true || (n - 1) % 5 == 0) {
            n++;
        }
    }
    return n;
}


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới
    int n = random(subtasks, iTest, testnum);
    cout << gen(n, iTest % 2) << endl;
}
