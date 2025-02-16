#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> army(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        int current = a[i];
        for (int j = 1; j <= sqrt(current); j++) {
            if (current % j == 0) {
                army.insert(j);
                army.insert(current / j);
            }
        }
    }
    cout << army.size();
}
// Các ước của N: 1 đến sqrt(N)
// Các ước của current: 1 đến sqrt(current)