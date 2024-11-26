#include <bits/stdc++.h>  

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long tong = 0;

    for (int x = 1; x <= sqrt(n); x++) {
        if (n % x == 0) {
            tong += x;
            
            if (n / x != x)
                tong += n / x;
        }
    }

    cout << tong;
}