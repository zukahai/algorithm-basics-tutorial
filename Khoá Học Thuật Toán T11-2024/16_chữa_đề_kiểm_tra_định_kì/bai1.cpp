#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <  (double) k / 2 ) {
            dem++;
        }
    }
    cout << dem;
}