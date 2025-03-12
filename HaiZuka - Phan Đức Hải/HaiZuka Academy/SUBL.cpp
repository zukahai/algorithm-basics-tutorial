#include <bits/stdc++.h>

using namespace std;

int a[1000009];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SUBL.INP", "r", stdin);
    freopen("SUBL.OUT", "w", stdout);

    int n;
    long long m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int left = 1, right = n;
    int res = -1;

    while (left <= right) { // O(NlogN)
        int l = (left + right) / 2;
        // duyệt qua tất cả dãy con độ dài l
        bool flag = true; // danh dau xem l co phai dap an khong
        long long sum = 0;
        for (int i = 1; i <= l; i++) 
            sum += a[i];
        if (sum < m) {
            flag = false;
        }
        for (int i = l + 1; i <= n; i++) {
            sum = sum + a[i] - a[i - l];
            if (sum < m) {
                flag = false;
            }
        }
        if (flag == true) {
            res = l;
            right = l - 1;
        } else {
            left = l + 1;
        }
    }
    cout << res;
}