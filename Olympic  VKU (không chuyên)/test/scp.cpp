#include <bits/stdc++.h>   

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long x = sqrt(n); // phần nguyên của căn bậc 2 của n
    if (x * x == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}