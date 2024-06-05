/*
https://codeforces.com/contest/1480/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

vector <string> ans;

string solve(int A, int B, vector <int> a, vector <int> b) {
    int cs = 0;
    int max = a[0];
    for (int i = 0; i < a.size(); i++)
        if (max < a[i]) {
            max = a[i];
            cs = i;
        }
    for (int i = 0; i < a.size(); i++)
    if (i != cs) {
        int l = (b[i] + A - 1) / A;
        B -= l*  a[i];
        b[i] -= l * A;
    }
    if (B <= 0)
        return "NO";
    int h = (b[cs] + A - 1) / A;
    int k = (B + a[cs] - 1) / a[cs];
    int l = min(h, k);
    B -= l*  a[cs];
    b[cs] -= l * A;
    if (B > 0)
        return "YES";
    if (B <= 0 && b[cs] <= 0)
        return "YES";
    return "NO";
}

int main() {
    int t, A, B, n;
    vector <int> a, b;
    cin >> t;
    while (t--) {
        cin >> A >> B >> n;
        a.resize(n);
        b.resize(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        ans.push_back(solve(A, B, a, b));
    }
    for (auto x : ans)
        cout << x << endl;
}