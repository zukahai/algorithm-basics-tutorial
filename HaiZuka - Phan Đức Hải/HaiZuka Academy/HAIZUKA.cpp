#include <bits/stdc++.h>

using namespace std;

int prefix[100007][11];

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
    int n;
    cin >> n;
    vector <int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int x = 0; x <= 10; x++)
        prefix[0][x] = 0;

    for (int i = 1; i <= n; i++) {
        for (int x = 0; x <= 10; x++)
            prefix[i][x] = prefix[i - 1][x];
        prefix[i][a[i]] ++;
    }

    // for (int x = 0; x <= 10; x++) {
    //     cout << x << " : ";
    //     for (int i = 0; i <= n; i++) {
    //         cout << prefix[i][x] << " ";
    //     }
    //     cout << endl;
    // }

    int q, l, r;
    cin >> q;
    while(q--) {
        cin >> l >> r;
        int maxCnt = 0, res = 0;
        for (int x = 0; x <= 10; x++) {
            int cntX = prefix[r][x] - prefix[l - 1][x];
            if (cntX >= maxCnt) {
                maxCnt = cntX;
                res = x;
            }
        }
        cout << res << endl;
    }
    
}