#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a;

bool check(int x) {
    vector<int> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= x) b.push_back(1);
        else b.push_back(-1);
    }

    vector <int> c(n, 0);
    c[0] = b[0];
    for (int i = 1; i < n; i++) {
        c[i] = max(c[i - 1] + b[i], b[i]);
    }

    for (int i = 1; i < n; i++) {
        b[i] += b[i - 1];
    }

    vector<int> maxSum(n, 0);
    maxSum[k - 1] = b[k - 1];
    for (int i = k; i < n; i++) {
        maxSum[i] = b[i] - b[i - k];
        if (c[i - k] > 0)
            maxSum[i] += c[i - k];
    }

    for (int i = 0; i < n; i++) {
        if (maxSum[i] > 0) return true;
    }

    return false;
}

int main() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int res = 0, l = 1, r = 2e5;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid)) {
            res = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << res;
}