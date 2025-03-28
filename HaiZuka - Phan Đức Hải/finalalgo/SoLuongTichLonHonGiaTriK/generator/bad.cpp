#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long count = 0;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < n - 1; i++) {
        for (long long j = i + 1; j < n; j++) {
            if (a[i] * a[j] > k) {
                count++;
            }
        }
    }
    cout << count;
}