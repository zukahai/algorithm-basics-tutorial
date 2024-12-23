#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long x = ceil(1.0 * n / k);
    cout << k * x;
}