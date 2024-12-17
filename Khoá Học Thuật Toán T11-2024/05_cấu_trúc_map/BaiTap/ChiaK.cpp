#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    unordered_map <long long, long long> dem;
    long long n, k;
    cin >> n >> k;
    vector <long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (long long i = 0; i < n; i++) {
        dem[a[i] % k]++;
    }

    long long sum = dem[0] * (dem[0] - 1) / 2;
    
    for (pair <long long, long long> x : dem) {
        if (x.first == 0) {
            continue;
        }
        if (dem.find(k - x.first) != dem.end()) {
            if (x.first == k - x.first) {
                sum += dem[x.first] * (dem[x.first] - 1) / 2;
                dem[x.first] = 0;
            } else {
                sum += dem[x.first] * dem[k - x.first];
                dem[k - x.first] = dem[x.first] = 0;
            }
        }
        
    }
    cout << sum;

}