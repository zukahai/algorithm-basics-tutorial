#include <bits/stdc++.h>

using namespace std;

long long ceil2(double n) {
    cout << n << endl;
    cout << (long long)n << endl;
    if (n - (long long)n == 0) {
        return n;
    }
    return n + 1;
}

using namespace std;

int main() {
    long long n = 999999998000000002;
    long long k = ceil2(sqrt(n));
    cout << k * k - n;
}