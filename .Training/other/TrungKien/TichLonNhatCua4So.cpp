#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long res1 = 1LL * a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4];
    long long res2 = 1LL * a[0] * a[1] * a[n - 1] * a[n - 2];
    long long res3 = 1LL * a[0] * a[1] * a[2] * a[3];
    cout << max(res1, max(res2, res3));

}