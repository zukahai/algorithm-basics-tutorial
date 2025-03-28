#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even.push_back(a[i]);
        } else {
            odd.push_back(a[i]);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    int i = 0, j = 0;
    for (int k = 0; k < n; k++) {
        if (a[k] % 2 == 0) {
            cout << even[i++] << ' ';
        } else {
            cout << odd[j++] << ' ';
        }
    }

    return 0;

}