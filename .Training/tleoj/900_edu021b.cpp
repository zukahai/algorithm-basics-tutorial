/*
https://tleoj.edu.vn/problem/edu021b
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TNV.inp", "r", stdin);
    freopen("TNV.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b(251, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    int intMax = 0;
    for (int i = 0; i < 251; i++) {
        if (b[i] >= b[intMax]) {
            intMax = i;
        }
    }
    cout << intMax << " " << b[intMax];

}