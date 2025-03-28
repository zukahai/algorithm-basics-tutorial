#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    int res = 0;
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int l = k + 1; l < n; l++) {
                    if (__gcd(a[i], a[j]) +  __gcd(a[k], a[l]) > res) {
                        res = __gcd(a[i], a[j]) +  __gcd(a[k], a[l]);
                    }
                }
            }
        }
    }

    cout << res;
}