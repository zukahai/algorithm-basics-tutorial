#include <bits/stdc++.h>

using namespace std;

long long reverse(long long n);

string check(long long n) {
    n = reverse(n);
    if (n < 2) return "No";
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return "No";
    }
    return "Yes";
}

long long reverse(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}