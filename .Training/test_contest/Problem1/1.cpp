#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool flag = true;

    for (int i = 1; i < n - 1; i++) {
        if ((a[i] - a[i - 1]) * (a[i + 1] - a[i]) < 0) {
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";
}