#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long x = (long long) sqrt(n);
    if (x * x == n) {
        cout << x * x;
    } else {
        cout << (x + 1) * (x + 1);
    }
        
}

