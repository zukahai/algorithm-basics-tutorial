#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector <int> dem(10000008, 0);
    for (int i = 0; i < n; i++) {
        dem[a[i]]++;
    }

    for (int i = 0; i < dem.size(); i++) {
        if (dem[i] > 0) {
            cout << i << "  " << dem[i] << endl;
        }
    }
}