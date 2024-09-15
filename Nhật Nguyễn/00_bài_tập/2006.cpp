#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s = 0;
    for (int i = 1; i <= n; i++) {
        int h = i - 1;
        s += (1 + h * (h + 1) / 2);
    }
    cout << s;
}

// 1, 2, 4, 7, 11

/*

1
1 + 1
1 + 1 + 2
1 + 1 + 2 + 3
1 + 1 + 2 + 3 + 4

x * (x + 1) / 2

x*x + x / 2

(x * (x + 1) * (2 * x + 1) / 6 + x * (x + 1)) / 2

 */