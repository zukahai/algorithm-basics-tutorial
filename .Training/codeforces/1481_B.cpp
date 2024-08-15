/*
https://codeforces.com/contest/1481/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

vector <int> ans;

int solve(vector <int> a, int k) {
    vector <int> A = a;
    int s = 0;
    for (int i = a.size() - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            s += (a[i + 1] - a[i]);
            a[i] = a[i + 1];
        }
    }
    if (s < k)
        return -1;
    a = A;
    a[0] += k - 1;
    bool kt = true;
    while (true) {
        kt = true;
        for (int i = 0; i < a.size() - 1; i++)
            if (a[i] > A[i] && a[i + 1] < a[i]) {
                kt = false;
                if (A[i] >= a[i + 1] + (a[i] - A[i])) {
                    a[i + 1] += (a[i] - A[i]);
                    a[i] = A[i];
                } else {
                    int tg = a[i] + a[i + 1];
                    a[i] = tg / 2;
                    a[i + 1] = tg - a[i];
                }
            }
        // for (int i = 0; i < a.size(); i++)
        //     cout << a[i] << " ";
        // cout << endl;
        if (kt)
            break;
    }
    // int count = 0;
    // for (int i = 0; i < a.size(); i++)
    //     count += a[i] > A[i];
    // return count;
    for (int i = 0; i < a.size(); i++)
        if (a[i] < a[i + 1])
            return i + 1;
    return 1;
}

int main() {
    vector <int> a;
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        a.resize(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ans.push_back(solve(a, k));
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}