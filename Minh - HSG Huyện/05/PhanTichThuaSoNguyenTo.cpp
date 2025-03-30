#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int index = 2;
    long long temp = sqrt(n);

    while (index <= temp) {
        if (n % index == 0) {
            int count = 0;
            while (n % index == 0) {
                n /= index;
                count++;
            }
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