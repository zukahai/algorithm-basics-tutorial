#include <bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> &a, int N, int x) {
    int l = 0, r = N;
    int res = N + 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] <= x) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int m = 0;
    int index = 0;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> prevA(n, -1);
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    reverse(a.begin(), a.end());
    
    for (int i = 0; i < n; i++) {
        int j = lower_bound(b, m - 1, a[i]);
        b[j] = a[i];
        pos[j] = i;
        c[i] = j + 1;
        prevA[i] = -1;
        if (j > 0)
            prevA[i] = pos[j - 1];
        if (c[i] >= m) {
            m = c[i];
            index = i;
        }
    }

    vector <int> res;
    
    while (index != -1) {
        res.push_back(a[index]);
        index = prevA[index];
    }

    for (auto x: res)
        cout << x << " ";
}
