/*
Đếm xem trong dãy số có bao nhiều phần tử bằng 10

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 10) {
            dem++;
        }
    }
    cout << dem;
}