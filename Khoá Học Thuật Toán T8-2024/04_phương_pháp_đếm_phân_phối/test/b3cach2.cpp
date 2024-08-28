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

    vector<int> b(max + 1, 0);

    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        if (b[i] != 0)
            cout << i << " " << b[i] << endl;
    }
    // O(max(m, max))

}