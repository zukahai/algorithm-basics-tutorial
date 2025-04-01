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
    string s;
    int k;
    cin >> s >> k;
    for (int del = 1; del <= k; del++) {
        int indexDel = s.size() - 1;
        for (int i = 0; i <= s.size() - 2; i++) {
            if (s[i] > s[i + 1]) {
                indexDel = i;
                break;
            }
        }
        s.erase(indexDel, 1);
    }
    while (s[0] == '0' && s.size() != 1)
        s.erase(0, 1);
    cout << s;
}