#include <bits/stdc++.h>

using namespace std;

int main() {
    // Nhập xuất nhanh
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // Đọc file
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif

    // Chương trình chính
    int n, q;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        for (int i = l; i <= r; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }

}