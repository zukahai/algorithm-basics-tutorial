/*
https://tleoj.edu.vn/problem/edu013b
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isBeautiful(int n) {
    if (n < 10) {
        return false;
    }
    int sum = 0;
    while (n > 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return isPrime(sum);
}

int main() {
    freopen("CAU2.inp", "r", stdin);
    freopen("CAU2.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int index = 0;
    int count = 0;
    cin >> n;
    while (count < n) {
        index++;
        if (isBeautiful(index)) {
            count++;
        }
    }
    cout << index;

}