/*
https://codeforces.com/contest/1173/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

char solve(int x, int y, int z) {
    if (z == 0 && x == y)
        return '0';
    if (x > y) {
        if (y + z >= x)
            return '?';
        return '+';
    }
    if (x < y) {
        if (x + z >= y)
            return '?';
        return '-';
    }
    return '?';
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << solve(x, y, z);
}