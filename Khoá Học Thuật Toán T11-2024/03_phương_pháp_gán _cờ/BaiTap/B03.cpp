#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int flag = 1;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] <= a[i]) {
            flag = 0;
        }
    }
    if (flag == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}