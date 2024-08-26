#include <bits/stdc++.h>

using namespace std;

#define m 1000000007

int main() {
    int n;
    cin >> n;
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt = gt * i;
        gt = gt % m;
    }
    cout << gt % m;
}