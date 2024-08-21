#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << max(n * n, max(2 * n, 0ll));
}