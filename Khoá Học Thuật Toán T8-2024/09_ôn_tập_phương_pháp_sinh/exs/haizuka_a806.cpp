#include <bits/stdc++.h>

using namespace std;

long long genSSDX(int len, int value) {
    long long m = 0;
    for (int i = 0; i < len; i++) {
        m = m * 10 + value;
    }
    return m;
}

int lenNum(long long n) {
    int d = 0;
    while (n != 0) {
        n = n / 10;
        d++;
    }
    return d;
}

int main() {
    long long n;
    cin >> n;
    int len = lenNum(n);

    for (int value = 1; value <= 9; value++) {
        long long ssdx = genSSDX(len, value);
        if (ssdx >= n) {
            cout << ssdx;
            return 0;
        }
    }
}