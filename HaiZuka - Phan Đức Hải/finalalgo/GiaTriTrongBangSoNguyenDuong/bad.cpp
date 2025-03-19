#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n, k;
    cin >> n >> m >> k;
    int count = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i * j == k) {
                cout << i << " " << j << endl;
                count++;
            }
        }
    }

    cout << count;
}