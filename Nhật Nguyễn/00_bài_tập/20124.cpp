#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long N = n;
    long long index = 2;
    while (index <= sqrt(N)) {
        int count = 0;
        while (n % index == 0) {
            n /= index;
            count++;
        }
        
        if (count > 0) {
            cout << index << "^" << count;
            if (n > 1) {
                cout << " * ";
            }
        }
        index++;
    }

    if (n > 1) {
        cout << n << "^1";
    }
}