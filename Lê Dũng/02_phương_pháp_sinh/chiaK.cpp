#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long x = n / k;
    cout << x * k;
}


/*

n = 10, k = 3

0 3 6 9 12 15 18 21 24 27

3 * k -> 4 * k

n = x * k

123 20
? = x * k
*/