#include <bits/stdc++.h>

using namespace std;

int a[101];
int d[109];

int main() {
    int n, max, min;
    int ans = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        int t = d[a[i] + 1] + d[a[i]];
        ans  = (t > ans) ? t : ans;
    }
    
    cout << ans;
}