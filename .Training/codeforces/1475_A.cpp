/*
https://codeforces.com/contest/1475/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector <string> ans;

string solve(ll n) {
    while (n % 2 == 0)
        n /= 2;
    return (n == 1) ? "NO" : "YES";
}

int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ans.push_back(solve(n));
    }
    for (auto x : ans)
        cout << x << endl;
}