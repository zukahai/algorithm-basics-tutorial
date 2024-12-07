#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector <int> dem(10000008, 0);

    for (int i = 0; i < n; i++) {
        dem[a[i]]++;
    }

    int max = 0;
    int res = 0;
    for (int i = 0; i <= 10000007; i++) {
        if (dem[i] >= max) {
            max = dem[i];
            res = i;
        }
    }

    cout << res << " " << max;

}