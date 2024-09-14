#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n, x, y;
    cin >> n;

    if (n % 2 != 0) {
        x = (n + 5) / 2;
        y = x - 2;
    } else {
        y = (n + 2) / 2;
        x =  y + 1;
    }

    long long s = x * (x + 1) / 2 - 3 + y * (y + 1) / 2 - 1;
    cout << s;
    
}