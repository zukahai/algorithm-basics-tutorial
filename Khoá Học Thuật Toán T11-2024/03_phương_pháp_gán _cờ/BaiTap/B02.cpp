#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int flag = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            flag = 1;
            sum += a[i];
        }
    }

    if (flag == 0) {
        cout << -1;
    } else {
        cout << sum;
    }
}