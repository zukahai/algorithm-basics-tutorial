#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("UCLN.INP");
    ofstream cout("UCLN.OUT");

    long long M, N;
    cin >> M >> N;
    cout << __gcd(M, N);
}
