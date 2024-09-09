#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    for (long long i = n; i >= 0; i--) {
        if (i % k == 0) {
            cout << i;
            return 0;
        }
    }
}

