#include <bits/stdc++.h>

using namespace std;

int countDivisors(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) cnt++;
            else cnt += 2;
        }
    }
    return cnt;
}

int main() {
    long long a, b;
    cin >> a >> b;
    int cnt = 0;
    for (long long i = a; i <= b; i++) {
        if (countDivisors(i) == 5) cnt++;
    }
    cout << cnt;
}