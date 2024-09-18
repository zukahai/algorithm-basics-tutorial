#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int k = a[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (b[j] == 0) {
                count++;
            }
            if (count == k + 1) {
                b[j] = i + 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
}