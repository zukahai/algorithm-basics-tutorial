#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    int n;
    cin >> n;
    a.resize(n);
    vector<int> f(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    f[0] = a[0];

    for (int i = 1; i < n; i++) {
        if (f[i - 1] > 0) {
            f[i] = f[i - 1] + a[i];
        } else {
            f[i] = a[i];
        }
    }

    int max = f[0];
    int csMax = 0;

    for (int i = 1; i < n; i++) {
        if (f[i] > max) {
            max = f[i];
            csMax = i;
        }
    }

    vector<int> res;

    while(max != 0) {
        res.push_back(a[csMax]);
        max -= a[csMax];
        csMax--;
    }

    reverse(res.begin(), res.end());

    for (auto x : res) {
        cout << x << " ";
    }
}
