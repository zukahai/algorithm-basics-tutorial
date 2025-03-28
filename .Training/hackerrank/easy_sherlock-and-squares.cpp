#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, k, h;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        k = ceil(sqrt(a));
        h = floor(sqrt(b));
        int ans = (k > h) ? 0 : h - k + 1;
        cout << ans << endl;
    }
}