/*
https://codeforces.com/contest/4/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s = ((n - 2) % 2 == 0 && n >= 4) ? "Yes" : "No";
    cout << s;
}