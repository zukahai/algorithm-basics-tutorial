#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, vector<int>> m;

    for (int i = 0; i < n; i++) {
        m[a[i]].push_back(i);
    }

    vector<int> res;

    int count = 0;
    for (auto it = m.rbegin(); it != m.rend(); it++) {
        auto x = *it;
        for (int i = 0; i < x.second.size(); i++) {
            if (count == k) {
                break;
            }
            res.push_back(x.second[i]);
            count++;
        }
    }

    sort(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] + 1 << " ";
    }

}