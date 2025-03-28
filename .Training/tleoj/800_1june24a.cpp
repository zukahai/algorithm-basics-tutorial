#include <bits/stdc++.h>

using namespace std;

int solve(long long a, long long b, long long k) {
    int ans = 0;
    while (a != b) {
        if (a > b)
            a /= k;
        else
            b /= k;
        ans++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        cout << solve(a, b, k) << '\n';
    }
}