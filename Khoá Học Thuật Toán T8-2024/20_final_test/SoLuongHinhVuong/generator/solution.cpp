#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

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

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long M, n;
    cin >> M >> n;
    long long x = abs(M - n);
    n = min(M, n);

    long long res = n % m;
    res = res * ((n + 1) % m) % m;
    res = res * ((2 * n + 1 + 3 * x) % m) % m;
    res = res * solve(6, m - 2) % m;

    cout << res;

    
}
