#include<bits/stdc++.h>
using namespace std;

bool isChanLe(int n) {
    int k = 3;
    while (n > 0) {
        if (n % 2 == k)
            return false;
        k = n % 2;
        n /= 10;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (isChanLe(i))
            cnt++;
    }
    cout << cnt;
}