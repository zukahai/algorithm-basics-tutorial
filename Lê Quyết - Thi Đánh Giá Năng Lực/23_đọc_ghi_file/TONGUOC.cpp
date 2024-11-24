#include <bits/stdc++.h>

using namespace std;

int a[1000006];

int main() {

    ifstream cin("TONGUOC.INP");
    ofstream cout("TONGUOC.OUT");

    long long m, n;
    cin >> m >> n;
    int cs = 0;
    for (int i = 1; i <= sqrt(m); i++) {
        if (m % i == 0) {
            a[cs] = i;
            cs ++;

            if (i != m / i) {
                a[cs] = m / i;
                cs++;
            }
        }
    }
    sort(a, a + cs);

    long long tong = 0;
    for (int i = 0; i < cs; i++) {
        // Kiem tra 3 * a[i] co phai uoc cua N hay khong
        // Kiem tra A co phai la uoc cua B khong
        if (n % (3 * a[i]) == 0) {
            tong += a[i];
        }
    }
    cout << tong;
}
