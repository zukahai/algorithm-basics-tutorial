/*
https://codeforces.com/contest/1417/problem/F
*/
#include<bits/stdc++.h>

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << " = " << x << endl;

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
const char dc[] = {'R', 'D', 'L', 'U'};
const int INF = (int)1e6;
const int MAXN = (int)3e5 + 5;

namespace {
  struct Edge {
    int v, to, f, c;
    
    Edge() {
      v = to = f = c = 0;
    }
    
    Edge(int v, int to, int c) : v(v), to(to), c(c) {
      f = 0;
    }
  };
  
  vector<Edge> e;
  vector<int> adj[MAXN];
  int ptr[MAXN], d[MAXN], q[MAXN];
  int S, T, newS, newT, V;
  int cap[2][MAXN];
  
  void prep() {
    e.clear();
    
    for (int i = 0; i < V; ++i) {
      adj[i].clear();
      ptr[i] = d[i] = q[i] = 0;
      cap[0][i] = cap[1][i] = 0;
    }
  }
  
  void addEdge(int u, int v, int c) {
    //printf("E %d %d %d\n", u, v, c);
  
    adj[u].pb((int)e.size());
    e.pb(Edge(u, v, c));
    adj[v].pb((int)e.size());
    e.pb(Edge(v, u, 0));
  }
  
  void addEdgeLim(int u, int v) {
    //printf("F %d %d\n", u, v);
    ++cap[0][v];
    ++cap[1][u];
  }
  
  bool bfs() {
    fill(d, d + V, -1);
    d[newS] = 0;
    int l = 0, r = 0;
    q[r++] = newS;
    
    while (l < r) {
      int v = q[l++];
      
      for (int id : adj[v]) {
        if (e[id].f < e[id].c) {
          int to = e[id].to;
          
          if (d[to] == -1) {
            d[to] = d[v] + 1;
            q[r++] = to;
          }
        }
      }
    }
    
    return d[newT] != -1;
  }
  
  int dfs(int v, int flow = INF) {
    if (!flow || v == newT) {
      return flow;
    }
    
    int sum = 0;
    
    for (; ptr[v] < (int)adj[v].size(); ++ptr[v]) {
      int id = adj[v][ptr[v]];
      int to = e[id].to;
      int can = e[id].c - e[id].f;
      
      if (d[to] != d[v] + 1 || can == 0) {
        continue;
      }
      
      int pushed = dfs(to, min(flow, can));
      
      if (pushed > 0) {
        e[id].f += pushed;
        e[id ^ 1].f -= pushed;
        sum += pushed;
        flow -= pushed;
        
        if (flow == 0) {
          return sum;
        }
      }
    }
    
    return sum;
  }
  
  int maxFlow() {
    int ret = 0;
    
    while (bfs()) {
      fill(ptr, ptr + V, 0);
    
      while (int pushed = dfs(newS)) {
        ret += pushed;
      }
    }
    
    return ret;
  }
}

vvi arr, follow;
int n, m;

bool inside(int x, int y) {
  return 0 <= x && x < n && 0 <= y && y < m;
}

int id(int x, int y) {
  return x * m + y;
}

void solve() {
  scanf("%d %d", &n, &m);
  arr = follow = vvi(n, vi(m, -1));
  S = n * m;
  T = S + 1;
  newS = T + 1;
  newT = newS + 1;
  V = newT + 1;
  prep();
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &arr[i][j]);
    }
  }
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      for (int dir = 0; dir < 4; ++dir) {
        int ni = i + dx[dir], nj = j + dy[dir];
        
        if (inside(ni, nj)) {
          if (arr[ni][nj] < arr[i][j]) {
            follow[i][j] = dir;
          }
          else if ((i + j) % 2 == 0 && arr[ni][nj] == arr[i][j]) {
            addEdge(id(i, j), id(ni, nj), 1);
          }
        }
      }
      
      if (follow[i][j] == -1) {
        // important vertex
        if ((i + j) % 2) {
          addEdgeLim(id(i, j), T);
        }
        else {
          addEdgeLim(S, id(i, j));
        }
      }
      else {
        if ((i + j) % 2) {
          addEdge(id(i, j), T, 1);
        }
        else {
          addEdge(S, id(i, j), 1);
        }
      }
    }
  }
  
  for (int i = 0; i <= T; ++i) {
    if (cap[0][i] > 0) {
      addEdge(newS, i, cap[0][i]);
    }
    
    if (cap[1][i] > 0) {
      addEdge(i, newT, cap[1][i]);
    }
  }
  
  addEdge(T, S, INF);
  maxFlow();
  
  for (int id : adj[newS]) {
    if (e[id].f != e[id].c) {
      printf("NO\n");
      return;
    }
  }
  
  vvi ansv, ansc;
  ansv = ansc = vvi(n, vi(m));
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int dir = follow[i][j];
      
      if (dir != -1) {
        int ni = i + dx[dir], nj = j + dy[dir];
        ansv[i][j] = arr[i][j] - arr[ni][nj];
        ansc[i][j] = dir;
      }
    }
  }
  
  for (Edge it : e) {
    int v = it.v, to = it.to;
    
    if (max(v, to) < n * m && it.f == it.c && it.c == 1) {
      int ax = v / m, ay = v % m;
      int bx = to / m, by = to % m;
      ansv[ax][ay] = arr[ax][ay] - 1;
      ansv[bx][by] = 1;
      
      for (int dir = 0; dir < 4; ++dir) {
        if (mp(ax + dx[dir], ay + dy[dir]) == mp(bx, by)) {
          ansc[ax][ay] = dir;
          ansc[bx][by] = (dir + 2) % 4;
        }
      }
    }
  }
  
  printf("YES\n");
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      printf("%d%c", ansv[i][j], " \n"[j == m - 1]);
    }
  }
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      printf("%c%c", dc[ansc[i][j]], " \n"[j == m - 1]);
    }
  }
}

int main() {
  int tt;
  scanf("%d", &tt);
  
  while (tt--) {
    solve();
  }

  return 0;
}