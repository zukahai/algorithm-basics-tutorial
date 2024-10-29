#include <bits/stdc++.h>

using namespace std;

double can2(int n) {
    double l = 0, r = n;
    double m;
    while (r - l > 1e-9) {
        m = (l + r) / 2;
        if (m * m > n) {
            r = m;
        } else {
            l = m;
        }
    }
    return m;
}

int main() {
    int n;
    cin >> n;
    cout << can2(n) << endl;
    cout << sqrt(n);
}

// Can 2 cua n [0, n]
