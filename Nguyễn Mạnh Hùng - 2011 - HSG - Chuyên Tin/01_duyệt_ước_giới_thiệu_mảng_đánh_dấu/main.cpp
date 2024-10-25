#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> uocSo;

    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            uocSo.push_back(i);
            if (i != n / i) {
                uocSo.push_back(n / i);
            }
        }
    }

    sort(uocSo.begin(), uocSo.end());

    for (int i = 0; i < uocSo.size(); i++) {
        cout << uocSo[i] << " ";
    }


}