#include <bits/stdc++.h>

using namespace std;


int main() {

    long long n;
    cin >> n;
    long long x = n / 2;
    long long s =  3 * x * (x + 1) / 2;
    if (n % 2 == 1) {
        s += (x + 1);
    }
    cout << s;

}