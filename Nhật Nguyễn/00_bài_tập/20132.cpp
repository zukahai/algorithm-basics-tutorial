#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    long long x;
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0) {
            c++;
        }
    }

    cout << c;
}