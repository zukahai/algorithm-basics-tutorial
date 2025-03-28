/*
https://codeforces.com/contest/1416/problem/D
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

const int MAXN = (int)5e5 + 5;
const int MAXM = (int)3e5 + 5;
const int MAXQ = (int)5e5 + 5;

pii e[MAXM], que[MAXQ], t[MAXN << 2];
vector<int> adj[MAXN];
int tin[MAXN], tout[MAXN], timer;
int par[MAXN], arr[MAXN];
bool del[MAXM];
int n, m, q;

int getPar(int x) {
  if (x == par[x]) {
    return x;
  }
  
  return par[x] = getPar(par[x]);
}

void uni(int a, int b) {
  a = getPar(a);
  b = getPar(b);
  
  if (a == b) {
    return;
  }
  
  ++n;
  par[n] = n;
  par[a] = n;
  par[b] = n;
  adj[n].pb(a);
  adj[n].pb(b);
}

void dfs(int v) {
  tin[v] = ++timer;
  
  for (int to : adj[v]) {
    dfs(to);
  }
  
  tout[v] = timer;
}

pii segMax(int v, int tl, int tr, int l, int r) {
  if (l > r || tl > r || tr < l) {
    return mp(0, 0);
  }
  
  if (l <= tl && tr <= r) {
    return t[v];
  }
  
  int mid = (tl + tr) >> 1;
  int c1 = (v << 1), c2 = (c1 | 1);
  
  return max(segMax(c1, tl, mid, l, r), segMax(c2, mid + 1, tr, l, r));
}

void updPos(int v, int tl, int tr, int p, pii x) {
  if (tl == tr) {
    t[v] = x;
    return;
  }
  
  int mid = (tl + tr) >> 1;
  int c1 = (v << 1), c2 = (c1 | 1);
  
  if (p <= mid) {
    updPos(c1, tl, mid, p, x);
  }
  else {
    updPos(c2, mid + 1, tr, p, x);
  }
  
  t[v] = max(t[c1], t[c2]);
}

void solve() {
  scanf("%d %d %d", &n, &m, &q);
  
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &arr[i]);
  }
  
  for (int i = 1; i <= m; ++i) {
    int u, v;
    scanf("%d %d", &u, &v);
    e[i] = mp(u, v);
  }
  
  for (int i = 1; i <= q; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    que[i] = mp(a, b);
    
    if (a == 2) {
      del[b] = 1;
    }
  }
  
  for (int i = 1; i <= n; ++i) {
    par[i] = i;
  }
  
  for (int i = 1; i <= m; ++i) {
    if (!del[i]) {
      uni(e[i].fi, e[i].se);
    }
  }
  
  for (int i = q; i > 0; --i) {
    int tp = que[i].fi;
    
    if (tp == 2) {
      int id = que[i].se;
      uni(e[id].fi, e[id].se);
    }
    else {
      que[i].se = getPar(que[i].se);
    }
  }
  
  for (int i = 1; i <= n; ++i) {
    if (getPar(i) == i) {
      dfs(i);
    }
  }
  
  for (int i = 1; i <= n; ++i) {
    updPos(1, 1, n, tin[i], mp(arr[i], tin[i]));
  }
  
  for (int i = 1; i <= q; ++i) {
    int tp = que[i].fi;
   
    if (tp == 1) {
      int v = que[i].se;
      pii tmp = segMax(1, 1, n, tin[v], tout[v]);
      
      if (tmp.fi == 0) {
        printf("0\n");
      }
      else {
        printf("%d\n", tmp.fi);
        updPos(1, 1, n, tmp.se, mp(0, 0));
      }
    }
  }
}

int main() {
  int tt = 1;
  
  while (tt--) {
    solve();
  }

  return 0;
}