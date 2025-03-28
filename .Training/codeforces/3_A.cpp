/*
https://codeforces.com/contest/3/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

vector <string> ans;

vector <string> solve(string s, string p) {
    int o[4] = {s[0], s[1], p[0], p[1]};
    vector <string> a;
    while (o[0] != o[2] || o[1] != o[3]) {
        string k = "";
        if (o[0] < o[2]) {
            k = k + 'R';
            o[0]++;
        } else if (o[0] > o[2]) {
            k = k + 'L';
            o[0]--;
        }

        if (o[1] < o[3]) {
            k = k + 'U';
            o[1]++;
        } else if (o[1] > o[3]) {
            k = k + 'D';
            o[1]--;
        }
        a.push_back(k);
    }
    return a;
}

int main() {
    int t;
    string s, p;
    cin >> s >> p;
    ans = solve(s, p);
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << endl;
}