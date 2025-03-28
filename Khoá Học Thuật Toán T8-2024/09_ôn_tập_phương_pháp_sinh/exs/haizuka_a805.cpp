#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<long long> ssnt = {2, 3, 5, 7};
    int index = 0;
    while (index < ssnt.size()) {
        long long t = ssnt[index];
        for (int i = 1; i <= 9; i += 2) {
            long long x = t * 10 + i;
            if (isPrime(x)) {
                ssnt.push_back(x);
            }
        }
        index++;
    }


    long long a, b;
    cin >> a >> b;

    for (auto x : ssnt) {
        if (x >= a && x <= b) {
            cout << x << " ";
        }
    }
}