/*
https://codeforces.com/contest/1476/problem/G
*/
#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second
#define sz(a) int((a).size())
#define forn(i, n) for (int i = 0; i < int(n); ++i)

typedef pair<int, int> pt;

const int N = 100 * 1000 + 13;
const int P = 2000;

struct query {
  int t, l, r, k, i;
};

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  vector<int> a(n);
  forn(i, n) scanf("%d", &a[i]);
  
  vector<query> q;
  vector<array<int, 3>> upd;
  
  forn(i, m) {
    int tp;
    scanf("%d", &tp);
    if (tp == 1) {
      int l, r, k;
      scanf("%d%d%d", &l, &r, &k);
      q.push_back({sz(upd), l - 1, r - 1, k, sz(q)});
    } else {
      int p, x;
      scanf("%d%d", &p, &x); --p;
      upd.push_back({p, a[p], x});
      a[p] = x;
    }
  }
  
  sort(q.begin(), q.end(), [](const query &a, const query &b) {
    if (a.t / P != b.t / P)
      return a.t < b.t;
    if (a.l / P != b.l / P)
      return a.l < b.l;
    if ((a.l / P) & 1)
      return a.r < b.r;
    return a.r > b.r; 
  });
  
  for (int i = sz(upd) - 1; i >= 0; --i)
    a[upd[i][0]] = upd[i][1];
  
  vector<int> cnt(N), ord(N);
  vector<pt> bounds(N, {N, 0});
  bounds[0] = {0, N - 1};
  int L = 0, R = -1, T = 0;
  
  auto add = [&](int x) {
    int c = cnt[x];
    ++ord[bounds[c].x];
    bounds[c + 1].y = bounds[c].x;
    if (bounds[c + 1].x == N)
      bounds[c + 1].x = bounds[c].x;
    if (bounds[c].x == bounds[c].y)
      bounds[c].x = N - 1;
    ++bounds[c].x;
    ++cnt[x];
  };
  
  auto rem = [&](int x) {
    int c = cnt[x];
    --ord[bounds[c].y];
    if (bounds[c - 1].x == N)
      bounds[c - 1].y = bounds[c].y;
    bounds[c - 1].x = bounds[c].y;
    if (bounds[c].x == bounds[c].y)
      bounds[c].x = N;
    --bounds[c].y;
    --cnt[x];
  };
  
  auto apply = [&](int i, int fl) {
    int p = upd[i][0];
    int x = upd[i][fl + 1];
    if (L <= p && p <= R) {
      rem(a[p]);
      add(x);
    }
    a[p] = x;
  };
  
  vector<int> ans(sz(q));
  
  for (auto qr : q) {
    int t = qr.t, l = qr.l, r = qr.r, k = qr.k;
    while (T < t) apply(T++, 1);
    while (T > t) apply(--T, 0);
    while (R < r) add(a[++R]);
    while (L > l) add(a[--L]);
    while (R > r) rem(a[R--]);
    while (L < l) rem(a[L++]);
    
    int res = N;
    for (int i = 0, j = 0, sum = 0; i < N && ord[i] > 0; i = bounds[ord[i]].y + 1) {
      while (j < N && ord[j] > 0 && sum < k) {
        sum += bounds[ord[j]].y - bounds[ord[j]].x + 1;
        j = bounds[ord[j]].y + 1;
      }
      if (sum >= k) res = min(res, ord[i] - ord[j - 1]);
      sum -= bounds[ord[i]].y - bounds[ord[i]].x + 1;
    }
    if (res == N) res = -1;
    ans[qr.i] = res;
  }
  
  for (int x : ans) printf("%d\n", x);
}