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

long long sum(long long n) {
    long long s = n % m;
    s = (s * ((n + 1) % m)) % m;
    s = (s * ((2 * n + 1) % m)) % m;
    s = (s * solve(6, m - 2)) % m;
    return s;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long a, b;
    cin >> a >> b;
    cout << (sum(b) - sum(a - 1) + m) % m;
}
