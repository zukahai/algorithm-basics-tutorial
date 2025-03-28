#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    x = ceil((sqrt(n) - 1) / 2);
    cout << (2 * x + 1) * (2 * x + 1);
}