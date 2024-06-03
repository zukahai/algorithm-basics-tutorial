/*
1 + 4 + 6 + 8 + ...
*/

#include <bits/stdc++.h>

using namespace std;

long long solve(long long n) {
    return n * (n + 1) - 1;
}

int main() {
    long long n;
    cin >> n;
    cout << solve(n + 1) << endl;
    return 0;
}