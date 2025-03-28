/*
https://codeforces.com/contest/1407/problem/E
*/
#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 1;

vector<int> bg[maxn], rg[maxn];
int b[maxn], r[maxn], d[maxn], col[maxn];
int n, m;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, t;
        cin >> u >> v >> t;
        --u; --v;
        if (!t) bg[v].push_back(u);
        else rg[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
        d[i] = b[i] = r[i] = n;
    queue<int> q;
    q.push(n - 1);
    d[n - 1] = r[n - 1] = b[n - 1] = 0;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (auto to : bg[x]) {
            if (b[to] < n) continue;
            b[to] = d[x] + 1;
            if (max(b[to], r[to]) < n) {
                q.push(to);
                d[to] = max(b[to], r[to]);
            }
        }
        for (auto to : rg[x]) {
            if (r[to] < n) continue;
            r[to] = d[x] + 1;
            if (max(b[to], r[to]) < n) {
                q.push(to);
                d[to] = max(b[to], r[to]);
            }
        }
    }
    if (d[0] == n) cout << "-1\n";
    else cout << d[0] << '\n';
    for (int i = 0; i < n; i++) {
        if (b[i] > r[i]) col[i] = 0;
        else col[i] = 1;
        cout << col[i];
    }
    return 0;
}