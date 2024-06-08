/*
https://codeforces.com/contest/1467/problem/E
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e5;
vector<int> adj[N];
int a[N], par[N], n;

map<int, vector<int>> v, times;
int euler[N * 2 - 1], tin[N], tout[N], c = 0;

set<pair<int, int>> g;
int dp[N], ans;

void dfs(int v, int p = -1) {
    par[v] = p;
    tin[v] = c;
    euler[c++] = v;

    for (int i : adj[v]) {
        if (i == p)
            continue;
        dfs(i, v);
        euler[c++] = v;
    }

    tout[v] = c - 1;
}

void examine(int v) {
    int sum = 0;

    for (int i : adj[v]) {
        if (i == par[v])
            continue;

        int count = upper_bound(times[a[v]].begin(), times[a[v]].end(), tout[i]) - lower_bound(times[a[v]].begin(), times[a[v]].end(), tin[i]);
        if (count > 0)
            g.insert({v, i});
        sum += count;
    }

    sum = times[a[v]].size() - sum - 1;
    if (sum)
        g.insert({v, par[v]});
}

int setup(int v) {
    for (int i : adj[v]) {
        if (i != par[v])
            dp[v] += setup(i);
    }
    return dp[v] + g.count({v, par[v]});
}

void reroot(int v) {
    if (dp[v] == g.size())
        ans++;

    for (int i : adj[v]) {
        if (i == par[v])
            continue;

        dp[v] -= dp[i];
        dp[v] -= g.count({i, v});
        dp[i] += dp[v];
        dp[i] += g.count({v, i});

        reroot(i);

        dp[i] -= g.count({v, i});
        dp[i] -= dp[v];
        dp[v] += g.count({i, v});
        dp[v] += dp[i];
    }
}

int solveTestCase() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0);
    for (int i = 0; i < n; i++)
        v[a[i]].push_back(i);

    for (auto i : v) {
        if (i.second.size() == 1)
            continue;

        for (int j : i.second)
            times[i.first].push_back(tin[j]);
        sort(times[i.first].begin(), times[i.first].end());
        for (int j : i.second)
            examine(j);
    }

    setup(0);
    reroot(0);

    cout << ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--)
        solveTestCase();
}