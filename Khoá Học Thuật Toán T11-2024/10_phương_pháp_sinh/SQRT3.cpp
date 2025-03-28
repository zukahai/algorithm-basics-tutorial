#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    x = ceil(sqrt(n / 4.0));
    cout << 4 * x * x;
}