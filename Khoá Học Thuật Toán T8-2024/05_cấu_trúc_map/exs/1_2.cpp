#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<long long, int> b;
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    for (int i = 0; i < n; i++) { // a[i]
        if ((s - a[i] != a[i] && b[s - a[i]] > 0) ||
            (s - a[i] == a[i] && b[s - a[i]] >= 2)) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    /*
    
    5 7
    1 3 5 7 9
     */
}