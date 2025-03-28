#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int res = 0;
    for (int i = 0; i < n; i++) {
        vector<int> b;
        for (int j = i; j < n; j++) {
            vector<int>::iterator it = lower_bound(b.begin(), b.end(), a[j]);
            b.insert(it, a[j]);

            if (b[(b.size() - 1) / 2] > res && j - i + 1 >= k) {
                res = b[(b.size() - 1) / 2]; 
            }
        }
    }
    cout << res;
}