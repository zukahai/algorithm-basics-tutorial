/*
https://codeforces.com/contest/1462/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <vector<int>> ans;

vector <int> solve(vector<int> a) {
    vector <int> b(a.size());
    int k = 0;
    for (int i = 0; i < a.size() - 1; i += 2) {
        b[i] = a[k];
        b[i + 1] = a[a.size() - 1 - k];
        k++;
    }
    if (a.size() % 2)
        b.back() = a[k];
    return b;
}

int main() {
    int t, n, temp;
    vector <int> a;
    cin >> t;
    for (int i = 0; i < t; i++) {
        a.clear();
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            a.push_back(temp);
        }
        ans.push_back(solve(a));
    }
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}