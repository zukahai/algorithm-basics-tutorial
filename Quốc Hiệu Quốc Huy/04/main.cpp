#include <bits/stdc++.h>

using namespace std;

long long a[1000009];
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int max = a[n] * a[n - 1] * a[n - 2] * a[n - 3];
    if (max < a[1] * a[2] * a[n] * a[n - 1])
        max = a[1] * a[2] * a[n] * a[n - 1];
    if (max < a[1] * a[2] * a[3] * a[4])
        max = a[1] * a[2] * a[3] * a[4];
    cout << max;
}