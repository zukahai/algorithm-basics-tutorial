#include <bits/stdc++.h>

using namespace std;

int main() {
    map <long long, long long> b;
    b[100] = 1000000000000000000;
    b[40] = 5;
    b[999999999999999] = 123;
    b[-10] = 222;
    b[70] = 1232243534563;

    for (auto x: b) {
        cout << x.first << " " << b[x.first] << endl;
    }
}