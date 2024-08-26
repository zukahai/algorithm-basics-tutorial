#include <bits/stdc++.h>

using namespace std;

#define m 1000000007

vector<int> a;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long tong = 0;
    long long tich = 1;

    for (int i = 0; i < n; i++) {
        tong += a[i];
        tich *= a[i];
        tong %= m;
        tich %= m;
    }

    cout << tong << "\n" << tich;

}