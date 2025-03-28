#include <bits/stdc++.h>  

using namespace std;

int main() {
    vector <int> b(1000009, 0);
    int n;
    cin >> n;
    vector <int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        b[a[i]]++;
    }

    int mx = 0;
    int x = 0;
    for (int i = 1; i <= n; i++) {
        if (b[a[i]] > mx) {
            mx = b[a[i]];
            x = a[i];
        }

        if (b[a[i]] == mx && a[i] > x) {
            x = a[i];
        }
    }

    cout << x;
}