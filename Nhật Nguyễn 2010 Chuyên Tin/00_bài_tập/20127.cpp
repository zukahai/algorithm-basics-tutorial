#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    for (int i = 100; i <= 999; i++)
        if (isPrime(i))
            cout << i << endl;
}