#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (int j = 1; j <= i; j ++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int j = 1; j <= i - 2; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}