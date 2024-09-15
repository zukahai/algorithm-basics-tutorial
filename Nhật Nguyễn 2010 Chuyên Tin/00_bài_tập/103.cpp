#include <bits/stdc++.h>

using namespace std;

int main() {
    double x;
    cin >> x;
    if (x * x - 9 == 0 || x + 3 < 0) {
        cout << "NO";
        return 0;
    }
    double a = (2 * x) / (x * x - 9) + sqrt(x + 3);
    cout << (long long)(a * 100) / 100.0;
}