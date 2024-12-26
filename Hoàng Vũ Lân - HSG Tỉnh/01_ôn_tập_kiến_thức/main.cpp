#include <bits/stdc++.h>

using namespace std;

int main() {
    map <int, int> m;
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }

    for ( pair<int,int> x: m) {
        cout << x.first << " " << x.second << endl;
    }
}