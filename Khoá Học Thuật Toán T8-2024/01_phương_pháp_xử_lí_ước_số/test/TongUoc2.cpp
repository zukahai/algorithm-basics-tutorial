#include <bits/stdc++.h>

using namespace std;

// Nếu x là ước số của n thì n/x cũng là ước số của n

int main() {
    long long n;
    cin >> n;
    long long sum = 0;
    for (int x = 1; x <= sqrt(n); x++) {
        if (n % x == 0) { // x, n/x 
            sum += x;
            sum += n / x;
        }
    }

    double h = sqrt(n);
    
    if ((int)h == h)
        sum -= sqrt(n);

    cout << sum;
}