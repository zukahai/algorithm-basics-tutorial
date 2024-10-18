#include <bits/stdc++.h>

using namespace std;

set <int> s;

void solve(int n) {
    for (int x = 1; x * x <= n; ++x) {
        if (n % x == 0) { // x is a divisor of n, n / x is also a divisor of n
            s.insert(x);
            s.insert(n / x);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i) {
        solve(a[i]);
    }

    cout << s.size();
    
}