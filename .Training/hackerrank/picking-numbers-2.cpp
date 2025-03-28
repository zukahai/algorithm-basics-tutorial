#include <bits/stdc++.h>

using namespace std;

int a[101];
int d[101];

int main() {
    int n, max, min;
    int ans = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0;
    int r = 0;
    d[a[0]] = 1;
    max = min = a[0];
    while (r < n && l < n) {
        cout << l << " " << r << " " << max << " " << min << endl;
        if (max - min <= 1) {
            d[a[++r]]++;
            max = (max < a[r]) ? a[r] : max;
            min = (min > a[r]) ? a[r] : min;
            if (max - min <= 1 && r - l + 1 > ans)
                ans = r - l + 1;
        } else {
            d[++l]--;
            if (d[l - 1] == 0) {
                min = a[l];
                for (int i = l + 1; i <= r; i++) {
                    min = (min > a[i]) ? a[i] : min;
                    max = (max < a[i]) ? a[i] : max;
                }
            }
        }
    }
    cout << ans;
}