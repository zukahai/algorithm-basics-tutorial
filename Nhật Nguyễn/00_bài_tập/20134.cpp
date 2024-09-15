#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            c++;
        }
    }

    cout << c;
}