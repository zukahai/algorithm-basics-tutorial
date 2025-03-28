#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long m, n, k, col, row;
    cin >> m >> n >> k;
    int count = 0;
    vector<long long> a;
    for (int i = 1; i <= sqrt(k); i++) {
        if (k % i == 0) {
            a.push_back(i);
            if (i != k / i) {
                a.push_back(k / i);
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        row = a[i];
        col = k / row;
        if (row <= m && col <= n) {
            count++;
        }
    }
    cout << count;
}