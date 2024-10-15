#include <bits/stdc++.h>

using namespace std;

map<int, int> mp;

string solve(map<int, int> mp, int x, int y) {
    map <int, bool> visited;
    while (mp.find(y) != mp.end()) {
        if (mp[y] == x) {
            return "Yes";
        }
        y = mp[y];
    }
    return "No";
}

int main() {
    int n;
    cin >> n;
    

    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        mp[v] = u;
    }

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x == y) {
            cout << "Yes" << endl;
            continue;
        }
        cout << solve(mp, x, y) << endl;
    }
}