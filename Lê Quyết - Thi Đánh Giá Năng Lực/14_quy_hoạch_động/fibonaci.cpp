#include <bits/stdc++.h>

using namespace std;

int b[10000];

int main() {
    int n;
    cin >> n;
    b[1] = 1;
    b[2] = 1;
    for (int k = 3; k <= n; k++) {
        b[k] = b[k - 1] + b[k - 2];
    }

    for (int k = 1; k <= n; k++) {
        cout << b[k] << " ";
    }

    int a = 1, b1 = 8;
}