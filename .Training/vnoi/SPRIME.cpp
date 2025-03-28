#include <bits/stdc++.h>

using namespace std;

vector<int> prime(10000009, 1);

void sieve() {
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= prime.size(); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= prime.size(); j += i) {
                prime[j] = 0;
            }
        }
    }
}

bool isSuperPrime(int n) {
    if (n <= 1) return false;
    while (n > 0) {
        if (!prime[n]) return false;
        n /= 10;
    }
    return true;
}

int main() {
    ifstream file("SPRIME.INP");
    ofstream fileout("SPRIME.OUT");
    int a, b;
    file >> a >> b;
    sieve();
    for (int i = a; i <= b; i++) {
        if (isSuperPrime(i)) {
            fileout << i << endl;
        }
    }
}