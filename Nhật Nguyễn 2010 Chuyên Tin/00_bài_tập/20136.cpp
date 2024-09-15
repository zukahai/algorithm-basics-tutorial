#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    long long x, max = -999999999999999999;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > max && x % 2 == 0) {
            max = x;
        }
    }

    cout << max;
}