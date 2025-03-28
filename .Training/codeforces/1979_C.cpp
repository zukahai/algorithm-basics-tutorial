#include <bits/stdc++.h>

using namespace std;

bool check (vector <long long> a,long long max);

long long solve(vector <long long> a) {
    sort(a.begin(), a.end());
    long long sum = 0;
    for (long long i = 0; i < a.size(); i++) {
        sum += a[i];
    }

    long long l = 1, r = 1000000000000000, ans = -1;
    while (l <= r) {
        long long mid = (l + r) / 2;
        // cout << l << " " << r << " " << mid << " " << check(a, mid) << endl;
        if (check(a, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

bool check (vector <long long> a, long long max) {
    long long sum = 0;
    vector <long long> b(a.size());
    for (long long i = 0; i < a.size(); i++) {
        b[i] = max / a[i] + 1;
        sum += b[i];
    }
    for (long long i = 0; i < a.size(); i++) {
        if (a[i] * b[i] <= sum)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long k = solve(a);
        if (k == -1)
            cout << -1;
        else {
            for (long long i = 0; i < a.size(); i++) {
                long long h = k / a[i] + 1;
                cout << h << " ";
            }
        }
        cout << endl;
    }

    return 0;
}