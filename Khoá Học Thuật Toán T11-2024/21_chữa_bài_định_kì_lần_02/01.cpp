#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_map<long long, long long> dem;
    for (int i = 0; i < n; i++) {
        dem[a[i]]++;
    }
    long long sum = 0;
    for (pair<long long, long long> x : dem) {
        if (dem.find(2 * x.first) != dem.end()) {
            if (x.first == 0) {
                sum += x.second * (x.second - 1) / 2;
            } else {
                sum += x.second * dem[2 * x.first];
            }
        }
    }
    cout << sum;
}