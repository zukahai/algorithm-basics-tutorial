/*
https://tleoj.edu.vn/problem/25c
*/

#include <bits/stdc++.h>

using namespace std;

int a[1009][1009];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n; i++) {
        a[i][0] += a[i - 1][0];
        a[i][i] += a[i - 1][i - 1];
    }

    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            a[i][j] += max(a[i - 1][j - 1], a[i - 1][j]);
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = max(res, a[n - 1][i]);
    }
    cout << res;
}