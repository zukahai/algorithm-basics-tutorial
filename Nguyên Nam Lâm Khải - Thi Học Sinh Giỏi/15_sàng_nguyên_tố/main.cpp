#include <bits/stdc++.h>

using namespace std;

vector <bool> isPrime(10000001, true);

void sieve(int n) {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (isPrime[i] == true) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    // int n;
    // cin >> n;
    
    // sieve(n);

    // int count = 0;
    // for (int i = 2; i <= n; i++) {
    //     if (isPrime[i] == true) {
    //         count++;
    //     }
    // }

    // cout << count;

    double n = 1e7;
    double sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
        sum += n / i;
    cout << sum;

    
}