/*
https://codeforces.com/contest/1467/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

string str = "0123456789";

string solve(int n) {
    if (n == 1)
        return "9";
    if (n == 2)
        return "98";
    string s = "989";
    n -= 3;
    for (int i = 0; i < n / 10; i++)
        s = s + str;
    n %= 10;
    for (int i = 1; i <= n; i++)
        s = s + char('0' + (i - 1) % 10);
    return s;
}

vector <string> ans;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        ans.push_back(solve(n));
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}