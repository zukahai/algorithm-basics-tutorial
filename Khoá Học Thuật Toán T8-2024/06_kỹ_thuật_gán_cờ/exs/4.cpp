#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != 4 && a[i] != 7) {
            flag = 0;
            break;
        }
    }

    cout << (flag == 1 ? "YES" : "NO");

    // YES: Tất cả phần tử đều là 4 hoặc , a[i] == 4 || a[i] == 7
    // Chỉ cần 1 phần tử khác 4 và 7 thì NO, a[i] != 4 && a[i] != 7
    
}
