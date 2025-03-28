/*
https://codeforces.com/contest/1472/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

string solve(int w, int h, int n) {
    int count = 1;
    while (w % 2 == 0) {
        count *= 2;
        w /= 2;
    }
    while (h % 2 == 0) {
        count *= 2;
        h /= 2;
    }
    return (count >= n) ? "YES" : "NO";
}

int main() {
    int t, w, h, n;
    cin >> t;
    vector <string> ans(t);
    for (int i = 0; i < t; i++) {
        cin >> w >> h >> n;
        ans[i] = solve(w, h, n);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}