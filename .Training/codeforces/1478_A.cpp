/*
https://codeforces.com/contest/1478/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int solve(vector <int> a) {
    vector <bool> b(a.size(), true);
    int N = a.size();
    int count = 0;
    while (N) {
        count ++;
        int  i = 0;
        for (i = 0; i < a.size(); i++)
            if (b[i]) {
                N--;
                int k = a[i];
                b[i] = false;
                for (; i < a.size(); i++)
                    if (b[i] && a[i] > k) {
                        b[i] = false;
                        k = a[i];
                        N--;
                    }
                break;
            }
    }
    return count;
}

int main() {
    int t, n, k;
    cin >> t;
    vector <int> A(t);
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector <int> a (n);
        for (int j = 0; j < n; j++)
            cin >> a[j];
        A[i] = solve(a);
    }
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << endl;
}