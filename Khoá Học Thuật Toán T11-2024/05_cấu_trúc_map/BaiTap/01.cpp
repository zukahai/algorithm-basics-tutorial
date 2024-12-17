#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    unordered_map <long long, long long> dem;
    long long n;
    cin >> n;
    vector <long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (long long i = 0; i < n; i++) {
        dem[a[i]]++;
    }

    long long sum = 0;
    for (pair <long long, long long> x : dem) {
        sum += 1LL * x.second * (x.second - 1) / 2;
    }

    cout << sum;

}