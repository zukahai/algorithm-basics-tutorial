#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long x;
    if (n % k == 0) {
        x = n / k;
    } else {
        x = n / k + 1;
    }
    cout << k * x;
}