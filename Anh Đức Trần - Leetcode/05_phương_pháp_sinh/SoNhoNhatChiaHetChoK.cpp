#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long x = ceil((double)n / k);
    cout << k * x;
}