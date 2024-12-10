#include <bits/stdc++.h>

using namespace std;

int deQuy(int n) {
    if (n == 0) 
        return 0;
    return n + deQuy(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << deQuy(n);
    return 0;
}