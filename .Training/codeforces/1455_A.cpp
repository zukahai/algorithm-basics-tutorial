/*
https://codeforces.com/contest/1455/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <int> ans;

int solve(string s) {
    return s.length();
}

int main() {
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        ans.push_back(solve(s));
    }
    for (auto x : ans)
        cout << x << endl;
}