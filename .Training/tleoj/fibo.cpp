#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("DAYFIBO.INP");
    ofstream cout("DAYFIBO.OUT");

    int n;
    cin >> n;
    vector<long long> fibo(n + 1);
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    for (int i = 1; i <= n; i++) {
        cout << fibo[i] << " ";
    }

    return 0;
}