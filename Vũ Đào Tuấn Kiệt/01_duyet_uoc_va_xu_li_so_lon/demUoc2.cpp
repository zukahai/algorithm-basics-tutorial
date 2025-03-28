#include <bits/stdc++.h>

using namespace std;

// Nếu x là ước của N thì N/x cũng là ước của N
// O(sqrt(n))
int main() {
    long long n;
    int dem = 0;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // i là ước của n, n/i cũng là ước của n
            dem += 1;
            if (i != n/i) { // nếu i khác n/i thì tăng thêm 1 ước nữa
                dem += 1;
            }
        }
    }
    cout << dem;

}