/*
https://codeforces.com/contest/122/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

bool isLucky(int n) {
    while (n > 0) {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
    return true;
}

string solve(int n) {
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && (isLucky(i) || isLucky(n / i))) 
            return "YES";
    return "NO";
}

int main() {
    int n;
    cin >> n;
    cout << solve(n);
}