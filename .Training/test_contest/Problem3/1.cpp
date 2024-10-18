#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> mp;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 1; j <= a[i]; j++) {
            if (a[i] % j == 0) {
                mp[j]++;
            }
        }
    }
    cout << mp.size();
}