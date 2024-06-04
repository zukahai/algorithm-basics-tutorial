/*
https://tleoj.edu.vn/problem/stnum
*/

#include <bits/stdc++.h>

using namespace std;

long long a[31];

vector<long long> v;

int binarySearch(long long x) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] == x) {
            return mid;
        }
        if (v[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int main()
{
    freopen("STNUM.inp", "r", stdin);
    freopen("STNUM.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    a[0] = 1;
    for (int i = 1; i <= 30; i++) {
        a[i] = a[i - 1] * 2;
    }
    map <long long, bool> m;
    for (int i = 0; i <= 30; i++) {
        for (int j = 1; j <= 30; j++) {
            m[a[i] * (1 + a[j])] = true;
        }
    }

    for (auto it = m.begin(); it != m.end(); it++) {
        v.push_back(it->first);
    }

    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        int index = binarySearch(x);
        if (v[index] == x) cout << 0 << endl;
        else cout << min(v[index] - x, x - v[index - 1]) << endl;
    }

}