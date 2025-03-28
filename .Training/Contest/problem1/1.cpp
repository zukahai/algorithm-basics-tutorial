#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> b(n), c(n);
    b = c = a;
    sort(b.begin(), b.end());
    sort(c.begin(), c.end(), greater<int>());
    
    if (a == b || a == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}