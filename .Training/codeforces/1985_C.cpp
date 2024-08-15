/*
https://codeforces.com/contest/1485/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

vector <long long> ans;

long long solve(long long x, long long y) {
    long long a1, a2, count = 0;
    for (int L = 1; L <= 100000; L++) {
        a1 = x / L - 1;
        a2 = y;
        // cout << a1 << " " << a2 << " " << L << endl;
        if (a1 > a2)
            a1 = a2;
        if (a1 > L)
            count += a1 - L;
    }
    return count;
}

int main() {
    long long t, x, y;
    cin >> t;
    while (t --) {
        cin >> x >> y;
        ans.push_back(solve(x, y));
    }
    for (auto x : ans)
        cout << x << endl;
}