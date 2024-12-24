#include <bits/stdc++.h>

using namespace std;

int search(vector <int> a, int x) {
    int l = 0, r = a.size() - 1;
    int res = -2;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            res = m;
            r = m - 1;
        } 
        if (a[m] < x) {
            l = m + 1;
        }
        if (a[m] > x) {
            r = m - 1;
        }
    }
    return res + 1;
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        cout << search(a, x) << endl;
    }
}