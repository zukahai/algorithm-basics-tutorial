#include <bits/stdc++.h>

using namespace std;

map<int, int> mp;

string solve(map<int, int>& mp, int x, int y) {
    while (mp.find(y) != mp.end()) {
        if (y == x) { // Nếu y chính là x, nghĩa là x là tổ tiên của y
            return "Yes";
        }
        y = mp[y]; // Di chuyển lên tổ tiên của y
    }
    return (y == x) ? "Yes" : "No"; // Kiểm tra lần cuối nếu y là gốc
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        mp[v] = u; // u là tổ tiên của v
    }

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << solve(mp, x, y) << endl;
    }
}
