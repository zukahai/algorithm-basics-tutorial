#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, n;
    cin >> a >> b >> n;
    long long bcnn = (long double)a * b / __gcd(a, b);
    cout << n / a + n / b - n / bcnn;
}

// 10^300, 10^100000