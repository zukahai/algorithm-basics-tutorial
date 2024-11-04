#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int l = 1, r = n;
    int step = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > l && j < r) {
                cout << " ";
            } else {
                cout << j;
            }
            cout << " ";
        }
        cout << endl;

        l += step;
        r -= step;
        if (l >= r) {
            step = -1;
        }
        
    }
}