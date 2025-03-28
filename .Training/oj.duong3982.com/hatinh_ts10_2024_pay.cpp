#include <bits/stdc++.h>

using namespace std;


int main() {
    long long x1, x2, x3, x4, y;
    cin >> x1 >> x2 >> x3 >> x4;
    cin >> y;
    if (y <= 50)
        cout << y * x1;
    else if (y <= 100)
        cout << 50 * x1 + (y - 50) * x2;
    else if (y <= 200)
        cout << 50 * x1 + 50 * x2 + (y - 100) * x3;
    else
        cout << 50 * x1 + 50 * x2 + 100 * x3 + (y - 200) * x4;
}