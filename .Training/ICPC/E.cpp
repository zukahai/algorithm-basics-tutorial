#include <bits/stdc++.h>

using namespace std;

string solve(vector<vector<int>> a, int x, int y) {
    vector<bool> visited(a.size(), false);
    queue<int> q;
    q.push(x);
    visited[x] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : a[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                if (v == y) {
                    return "Yes";
                }
            }
        }
    }
    return "No";
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);

    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << solve(a, x, y) << endl;
    }
}