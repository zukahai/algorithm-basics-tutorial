#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    map <long long, int> dem;
    int n;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        dem[a[i]]++;
    }

    for (pair <long long, int> x : dem) {
        cout << x.first << " " << x.second  << endl;
    }

}