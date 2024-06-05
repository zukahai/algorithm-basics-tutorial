/*
https://codeforces.com/contest/1111/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

string solve(string s, string p) {
    if (s.length() != p.length())
        return "NO";
    vector <bool> b(123, false);
    b['u'] = b['e'] = b['o'] = b['a'] = b['i'] = true;
    int check = 1;
    for (int i = 0; i < s.length(); i++)
        check *= (!b[s[i]] ^ b[p[i]]);
    return (check) ? "Yes" : "No";
}

int main() {
    string s, p;
    getline(cin, s);
    getline(cin, p);
    cout << solve(s, p);
}