#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long x = n / k;
    if (n % k != 0)
        x++;
    cout << k * x;
        
}