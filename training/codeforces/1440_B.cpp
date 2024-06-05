/*
https://codeforces.com/contest/1440/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

vector <long long> ans;
vector <int> a;

int main() {
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        a.resize(n * k);
        for (int j = 0; j < n * k; j++)
            cin >> a[j];
        int h = n - (n + 1) / 2 + 1;
        long long s = 0;
        for (int j = a.size() - h; k-- > 0; j -= h)
            s += a[j];
        ans.push_back(s);
    }
    for (auto x : ans)
        cout << x << endl;
}