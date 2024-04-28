#include <bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b) {
    long long d;
    do {
        d = a % b;
        a = b;
        b = d;
    } while (d != 0);
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, k;
    cin >> x >> k;
    cout << k / ucln(x, k);

    return 0;
}