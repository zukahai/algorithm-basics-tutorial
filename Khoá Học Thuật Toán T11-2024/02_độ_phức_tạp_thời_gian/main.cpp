#include <bits/stdc++.h>  

using namespace std;

int main() {
    long long n;
    cin >> n;
    int dem = 0;

    for (long long i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            for (int k = 1; k <= n; k ++) {
                dem ++;
            }
        }
    }


    for (long long i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            for (int k = 1; k <= n; k ++) {
                for (int l = 1; l <= n; l ++) {
                    dem ++;
                }
            }
        }
    }
    cout << dem;

    // n = 10: 1, 2, 3, 4, ... 10
    // n = 100: 1, 2, 3, 4, ... 100
    // O(n) * O(n) = O(n^2)
}