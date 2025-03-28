#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            cout << "False";
            return 0;
        }
    }

    cout << "True";
}