#include <bits/stdc++.h>

using namespace std;

int max(vector <int> a) {
    int ans = max(a[0], a[1]);
    for (int i = 1; i < a.size() - 1; i++) {
        ans = min(ans, max(a[i], a[i + 1]));
    }
    return ans - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << max(a) << endl;
    }

    return 0;
}