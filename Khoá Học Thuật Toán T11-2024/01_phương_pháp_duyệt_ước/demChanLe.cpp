#include <bits/stdc++.h>  

using namespace std;

int main() {
    long long n;
    cin >> n;
    int demChan = 0, demLe = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                demChan++;
            } else {
                demLe++;
            }

            if (n / i != i) {
                if ((n / i) % 2 == 0) {
                    demChan++;
                } else {
                    demLe++;
                }
            }
        }
    }

    cout << demChan << " " << demLe;
}