#include<bits/stdc++.h>
using namespace std;

long long m = 1000000007;

long long solve(long long a, long long b) {
    a %= m;
    if (b == 0) return 1;
    long long res = 1;

    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % m;
            b--;
        } else {
            a = (a * a) % m;
            b /= 2;
        }
    }

    return res;
}

long long gt(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res = (res * i) % m;
    }
    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long x, y, n;
    cin >> x >> y;
    n = x + y;

    long long kq = gt(n);
    kq = (kq * solve(gt(x), m - 2)) % m;
    kq = (kq * solve(gt(y), m - 2)) % m;
    cout << kq;
    
}
