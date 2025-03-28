/*
https://codeforces.com/contest/1480/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <string> ans;

string solve(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            if (s[i] == 'a')
                s[i] = 'b';
            else 
                s[i] = 'a';
        } else {
            if (s[i] == 'z')
                s[i] = 'y';
            else 
                s[i] = 'z';
        }
    }
    return s;
}

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        ans.push_back(solve(s));
    }
    for (auto x : ans)
        cout << x << endl;
}