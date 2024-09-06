#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i]) == true) {
            flag = 0;
            cout << a[i] << " ";
        }
    }

    if (flag == 1) {
        cout << "NO";
    }
    
}
