/*
https://codeforces.com/contest/71/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <string> ans;

string toString(int n) {
    string s = "";
    while (n > 0) {
        s = char(n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}

string solve(string s) {
    if (s.length() <= 10)
        return s;
    string p = s[0] + toString(s.length() - 2) + s[s.length() - 1];
    return p;
}

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        getline(cin, s);
        ans.push_back(solve(s));
    }
    for (auto x : ans)
        cout << x << endl;
}