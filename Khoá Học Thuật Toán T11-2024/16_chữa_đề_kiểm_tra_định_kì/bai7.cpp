#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long x) {
    if (x < 2) {
        return false;
    }
    for (long long i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    a.push_back(7);
    int index = 0;
    long long n;
    cin >> n;
    while (index < a.size() && a.back() < n) {
        for (int i = 1; i < 10; i += 2) {
            int x = a[index] * 10 + i;
            if (isPrime(x)) {
                a.push_back(x);
            }
        }
        index++;
    }

    long long minDiff = LLONG_MAX;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - n) < minDiff) {
            minDiff = abs(a[i] - n);
        }
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - n) == minDiff) {
            cout << a[i] << " ";
        }
    }
}

// x, y: abs(x - y)
// set<long long> 
// O(n * sqrt(a[i]))
