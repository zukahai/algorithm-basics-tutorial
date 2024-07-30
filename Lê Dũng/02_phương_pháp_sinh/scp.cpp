#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long x = ceil(sqrt(n));
    cout << x * x;
}

/*

x * x <= n
n = 10, Tìm x = 3
n = 123, Tìm x = 11

x * x <= n
x <= sqrt(n)

n, k
x * k <= n
x <= n / k

*/