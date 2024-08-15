#include <bits/stdc++.h>

using namespace std;

vector<int> a(3);
// 1 4 10
set <int> solve(vector <int> a) {
    set <int> ans;
    sort(a.begin(), a.end());
    if (a[1] - a[0] == a[2] - a[1]) {
        if (a[0] - (a[1] - a[0]) > 0) {
            ans.insert(a[0] - (a[1] - a[0]));
        }
        ans.insert(a[2] + (a[1] - a[0]));
    }
    if (a[1] - a[0] == 2 * (a[2] - a[1])) {
        ans.insert(a[1] - (a[2] - a[1]));
    }
    if (a[2] - a[1] == 2 * (a[1] - a[0])) {
        ans.insert(a[2] - (a[1] - a[0]));
    }
    return ans;
}

int main() {
    freopen("gues.inp", "r", stdin);
    freopen("gues.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    set <int> res = solve(a);
    for (auto x : res) {
        cout << x << " ";
    }
}