#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n; j++)
            if (a[i] + a[j] == s) {
                cout << "YES";
                return 0;
            }
    cout << "NO";
}