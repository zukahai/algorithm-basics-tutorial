#include <bits/stdc++.h>

using namespace std;

int n;
int x[100];

void loop(int index) {
    if (index > n) {
        for (int i = 1; i <= n; i++)
            cout << x[i];
        cout << endl;
        return;
    }
    for (int i = 0; i <= 1; i++) {
        x[index] = i;
        loop(index + 1);
    }
}

int main() {
    // Nhập xuất nhanh
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // Đọc file
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif
    cin >> n;
    loop(1);
    

}