#include <bits/stdc++.h>

bool isPrime(long long n) {
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

using namespace std;

int main() {
    vector<long long> supperPrimes = {2, 3, 5, 7};
    int index = 0;
    while (index < supperPrimes.size()) {
        long long t = supperPrimes[index];
        for (int i = 1; i < 10; i += 2) {
            long long n = t * 10 + i;
            if (isPrime(n))
                supperPrimes.push_back(n);
        }
        index++;
    }

    long long n;
    cin >> n;
    long long distance = abs(n - supperPrimes[0]);
    for (int i = 1; i < supperPrimes.size(); i++) {
        if (abs(n - supperPrimes[i]) < distance) {
            distance = abs(n - supperPrimes[i]);
        }
    }

    for (auto x : supperPrimes) {
        if (abs(n - x) == distance) {
            cout << x << " ";
        }
    }
}