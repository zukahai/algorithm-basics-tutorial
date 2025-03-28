#include <bits/stdc++.h>

using namespace std;

int main() {
    double n = 1e7;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += n / i;
    }
    cout << sum;
}