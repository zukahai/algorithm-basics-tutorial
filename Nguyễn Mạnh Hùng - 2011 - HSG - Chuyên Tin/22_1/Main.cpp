#include <bits/stdc++.h>

using namespace std;

void hello(int n) {
    if (n == 0) return;
    hello(n - 1);
    cout << n <<  " ";
}

int main() {
    hello(5);
}