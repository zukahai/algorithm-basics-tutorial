/*
https://codeforces.com/contest/1473/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, d;
    cin >> t;
    vector <string> A(t);
    for (int i = 0; i < t; i++) {
        cin >> n >> d;
        vector <int> a;
        a.clear();
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            a.push_back(k);
        }
        sort(a.begin(), a.end());
        A[i] = (a[0] + a[1] <= d || a[n - 1] <= d) ? "YES" : "NO";
    }
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << endl;
}