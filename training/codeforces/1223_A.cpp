/*
https://codeforces.com/contest/1223/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <int> ans;

int solve(int n) {
    if (n < 4)
        return 4 - n;
    return n % 2;
}

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        ans.push_back(solve(n));
    }
    for (auto x : ans)
        cout << x << endl;
}