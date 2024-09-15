#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "NO";
        return 0;
    } 

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        cout << "VUONG";
    } else if (a == b && b == c) {
        cout << "DEU";
    } else if (a == b || b == c || a == c) {
        cout << "CAN";
    } else {
        cout << "THUONG";
    }
}