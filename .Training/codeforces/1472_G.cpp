/*
https://codeforces.com/contest/1472/problem/D
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> calcDist(vector<vector<int>> const &g) {
  vector<int> dist(g.size(), -1);
  dist[1] = 0;
  queue<int> pq;
  pq.push(1);
  while (!pq.empty()) {
    int u = pq.front();
    pq.pop();
    for (int v : g[u]) {
      if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        pq.push(v);
      }
    }
  }

  return dist;
}

void dfs(int u, vector<vector<int>> const &g, vector<int> const &dist, vector<int> &dp, vector<bool> &used) {
  used[u] = true;
  dp[u] = dist[u];
  for (int v : g[u]) {
    if (!used[v] && dist[u] < dist[v]) {
      dfs(v, g, dist, dp, used);
    }

    if (dist[u] < dist[v]) {
      dp[u] = min(dp[u], dp[v]);
    } else {
      dp[u] = min(dp[u], dist[v]);
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n + 1);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
  }

  vector<int> dist = calcDist(g);
  vector<int> dp(n + 1);
  vector<bool> used(n + 1);
  dfs(1, g, dist, dp, used);
  for (int i = 1; i <= n; i++) {
    cout << dp[i] << " ";
  }
  cout << endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}