#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a, int d, int m) {
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < a.size() && m > 0; i++, m--) {
        ans += a[i];
    }
    ans -= d * m;
    return ans;
}

int main() {
    int n, d, m;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    cout << solve(a, d, m) << endl;
    return 0;
}