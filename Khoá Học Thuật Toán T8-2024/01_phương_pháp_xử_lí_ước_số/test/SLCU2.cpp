#include <bits/stdc++.h>

using namespace std;

// Nếu x là ước số của n thì n/x cũng là ước số của n

int main() {
    long long n;
    cin >> n;
    int dem = 0;
    for (int x = 1; x <= sqrt(n); x++) {
        if (n % x == 0) { // x, n/x 
            dem += 2;
        }
    }

    float h = sqrt(n);
    if ((int)h == h)
        dem--;

    cout << dem;
}