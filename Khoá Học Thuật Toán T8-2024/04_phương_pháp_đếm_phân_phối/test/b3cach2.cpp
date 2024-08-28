/*
Đếm xem trong dãy số có bao nhiều phần tử bằng 10

*/

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

    // In ra số lần xuất hiện của các số từ 1 đến max
    for (int i = 1; i <= max; i++) {
        if (b[i] != 0)
            cout << i << " " << b[i] << endl;
    }
    // O(max(m, max))

}