#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main() {
    vector<long long> f(1000001);
    // f[k]: giá trị của số fibonacci thứ k
    f[1] = f[2] = 1;
    for (int i = 3; i <= 1000000; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % mod;
    }
    int t;
    cin >> t;
    while(t--) {
        int temp;
        cin >> temp;
        cout << f[temp] << endl;
    }

}