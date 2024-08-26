#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    int dem = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dem++;
        }
    }
    
    cout << dem;

}