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


int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long a, b, c;
    cin >> a >> b >> c;
    long long res = a % m;
    res = (res * (b % m)) % m;
    res = (res * solve(c, m - 2)) % m;
    cout << res;

}
