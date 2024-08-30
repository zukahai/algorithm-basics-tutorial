#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector <long long> a(n);

    // Nhập dãy số
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<long long, int> b; // b[k]

    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    int m = 0;
    for (auto x: b) {
        if (x.second > m) {
            m = x.second;
        }
    }

    for (auto x: b) {
        if (x.second == m) {
            cout << x.first;
            return 0;
        }
    }

/*
x: b
x.first: key (i trong b[i])
x.second: value (b[i])


b[k]: số lần xuất hiện của k trong dãy a

 */

}
