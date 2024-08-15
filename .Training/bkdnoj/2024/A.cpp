#include <bits/stdc++.h>

using namespace std;

string a[1009];

long long xPowX(long long x, long long mod) {
    if (x == 0)
        return 0;
    long long ans = 1;
    for (long long i = 1; i <= x; i++) {
        ans = (ans * x) % mod;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] += '.';
    }

    long long sumRow = 0;
    long long maxRow = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        sumRow = 0;
        for (int j = 0; j < n + 1; j++) {
            if (a[i][j] == '#') {
                cnt++;
            } else {
                sumRow += xPowX(cnt, 1000000007);
                sumRow %= 1000000007;
                cnt = 0;
            }
        }
        maxRow = (maxRow < sumRow) ? sumRow : maxRow;
    }

    long long sumCol = 0;
    long long maxCol = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        sumCol = 0;
        for (int j = 0; j < n + 1; j++) {
            if (a[j][i] == '#') {
                cnt++;
            } else {
                sumCol += xPowX(cnt, 1000000007);
                sumCol %= 1000000007;
                cnt = 0;
            }
        }
        maxCol = (maxCol < sumCol) ? sumCol : maxCol;
    }

    cout << maxRow << " " << maxCol << endl;
}