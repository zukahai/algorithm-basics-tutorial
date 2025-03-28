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

    for (auto x: b) {
        cout << x.first << " " << x.second << endl;
    }


}
