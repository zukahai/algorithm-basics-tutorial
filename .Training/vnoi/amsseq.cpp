#include <bits/stdc++.h>

using namespace std;

int a[10009], b[10009];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    b[0] = 0;
    for (int i = 1; i <= n; i++) {
        int max = b[i - 1];
        for (int j = i - 2; j >= 0 && j >= i - k; j--)
            if (max < b[j])
                max = b[j];
        b[i] = max + a[i];
    }
    int max = b[0];
    for (int i = 0; i <= n; i++)
        if (max < b[i])
            max = b[i];
    cout << max;
}
