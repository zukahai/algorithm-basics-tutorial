#include <bits/stdc++.h>  

using namespace std;

int main() {
    long long n;
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem++;
            if (n / i != i)
                dem++;
        }
    }

    if (dem == 2)
        cout << "YES";
    else
        cout << "NO";
}