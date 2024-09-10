#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> a;
    int n;
    cin >> n;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n <= 2) {
        cout << "YES";
        return 0;
    }

    int x;
    if (a[0] == a[1]) {
        x = a[0];
    } else if (a[0] == a[2]) {
        x = a[0];
    } else if (a[1] == a[2]) {
        x = a[1];
    } else {
        cout << "NO";
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            count++;
        }
    }

    if (count <= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}