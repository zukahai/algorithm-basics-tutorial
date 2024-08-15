/*
https://codeforces.com/contest/1/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    cout << ((a + m - 1) / m) * ((b + m - 1) / m);
}