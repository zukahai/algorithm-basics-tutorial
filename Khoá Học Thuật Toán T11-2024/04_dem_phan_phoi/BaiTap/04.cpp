#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    unordered_map <long long, int> dem;
    int n;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        dem[a[i]]++;
    }

    int max = 0;
    long long res = -1;

    for (pair <long long, int> x : dem) {
        if (x.second > max || (x.second == max && x.first < res)) {
            max = x.second;
            res = x.first;
        }
    }

    cout << res;

}