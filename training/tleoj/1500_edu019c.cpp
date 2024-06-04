/*
https://tleoj.edu.vn/problem/edu019c
*/

#include <bits/stdc++.h>

using namespace std;

long long solve(string s) {
    int n = s.size();
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += ((i + 1) * (i + 1) * (s[i] - 'a' + 1));
        res %= 1000000007;
    }
    return res;
}

long long cal(long long n) {
    long long ans = n * (n + 1) * (2 * n + 1) / 6;
    return ans % 1000000007;
}

int main() {
    freopen("GIAXAU.inp", "r", stdin);
    freopen("GIAXAU.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);
    long long res = 0;
    long long sum = 0;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        long long k = i + 1;
        long long h = cal(k) * (n - i) % 1000000007;
        h *= (s[i] - 'a' + 1);
        h %= 1000000007;
        sum += h;
        sum %= 1000000007;
    }
    cout << sum;
}