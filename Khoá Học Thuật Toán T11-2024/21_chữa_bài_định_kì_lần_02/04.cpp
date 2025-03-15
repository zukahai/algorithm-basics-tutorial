#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long count = 0;

    for (int i = 0; i < n; i++) {
        int j = -1;
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[i] * a[mid] > k) {
                j = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (j != -1) {
            count += n - j;
        }
    }
    cout << count;
}