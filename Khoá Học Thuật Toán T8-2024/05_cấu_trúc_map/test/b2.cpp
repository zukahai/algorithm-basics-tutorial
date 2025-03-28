#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);

    // Nhập dãy số
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Tìm số lớn nhất trong dãy
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    vector<int> b(max + 1, 0);

    // Gặp số a[i] thì tăng b[a[i]] lên 1
    // Vì số a[i] đã xuất hiện thêm 1 lần
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    //  Tìm số lớn nhất trong mảng b
    int m = b[1];
    for (int i = 2; i <= max; i++) {
        if (b[i] > m) {
            m = b[i];
        }
    }
    
    for (int i = 1; i <= max; i++) {
        if (b[i] == m) {
            cout << i;
            return 0;
        }
    }

}