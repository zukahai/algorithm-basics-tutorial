#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n;
    cin >> n;
    long long x = (n + 1) / 2;
    long long s = -4 * x;
    s += 3 * x * (x + 1);
    cout << s;
    
}