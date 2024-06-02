#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(n, INT_MAX));
    for (int i = 0; i < n; i++)
        g[i][i] = 0;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a - 1][b - 1] = c;
    }
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (g[i][k] != INT_MAX && g[k][j] != INT_MAX)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << (g[a - 1][b - 1] == INT_MAX ? -1 : g[a - 1][b - 1]) << endl;
    }
    return 0;
}