#include <bits/stdc++.h>

using namespace std;

void hello(int n) {
    if (n <= 0)
        return;
    cout << "Hello " << n << endl;
    hello(n - 1);
    hello(n - 2);
}

int main() {
    hello(3);

    return 0;
}