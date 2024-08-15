/*
https://codeforces.com/contest/1440/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <long long> ans;

int solve(int n, int c0, int c1, int h, string s) {
    vector <long long> ans2;
    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i++)
        b += (s[i] - '0');
    a = n - b;
    ans2.push_back(a * c0 + b * c1);
    ans2.push_back(h * b + n * c0);
    ans2.push_back(h * a + n * c1);
    // cout << ans2[0] << " " << ans2[1] << " " << ans2[2] << endl;
    sort(ans2.begin(), ans2.end());
    return ans2.front();
    
}

int main() {
    int t, n, c0, c1, h;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> c0 >> c1 >> h;
        cin.ignore();
        getline(cin, s);
        ans.push_back(solve(n, c0, c1, h, s));
    }
    for (auto x : ans)
        cout << x << endl;
}