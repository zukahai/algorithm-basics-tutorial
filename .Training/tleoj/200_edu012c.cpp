/*
https://tleoj.edu.vn/problem/edu012c
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("HUBMAXS.inp", "r", stdin);
    // freopen("HUBMAXS.out", "w", stdout);
    // ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    int minA = 1000, minB = 1000;
    int maxA = -1000, maxB = -1000;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        minA = min(minA, a);
        minB = min(minB, b);
        maxA = max(maxA, a);
        maxB = max(maxB, b);
        cout << max(minA + maxB, maxA + minB) << endl;
    }
}