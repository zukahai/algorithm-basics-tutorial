#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    map<ll, ll> b;
    
    b[10] = 1;
    b[20] = 2;
    b[5] = 4;
    b[100] = 10000;
    b[-1000000000000000] = 111;

    for (auto x : b) {
        cout << x.first << " " << x.second << endl;
    }
}