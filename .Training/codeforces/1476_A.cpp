/*
https://codeforces.com/contest/1476/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <long long> ans;

long long solve(long long n, long long k) {
    int h = (n + k - 1) / k;
    k *= h;
    return (k + n - 1) / n;
}

int main() {
    long long t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        ans.push_back(solve(n, k));
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}