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

    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    for (int i = 1; i <= max; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) {
                dem++;
            }
        }
        if(dem==0)
            continue;
        cout << i << " " << dem << endl;
    }
}