/*
https://codeforces.com/contest/1481/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

vector <string> ans;

string solve(int a, int b, string s) {
    if (s.length() == 0)
        return "QQ";
    int d[123];
    d['L'] = d['R'] = d['U'] = d['D'] = 0;
    for (int i = 0; i < s.length(); i++)
        d[s[i]] ++;
    if (a > 0 && d['R'] < a)
        return "NO";
    if (a < 0 && d['L'] < - a)
        return "NO";
    if (b > 0 && d['U'] < b)
        return "NO";
    if (b < 0 && d['D'] < -b)
        return "NO";
    return "YES";
}

int main() {
    int t, a, b;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cin >> s;
        ans.push_back(solve(a, b, s));
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}