/*
https://codeforces.com/contest/50/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a % 2)
        swap(a, b);
    int count = (a / 2) * b;
    if (a % 2)
        count += b / 2;
    cout << count;
}