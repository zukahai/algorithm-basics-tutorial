/*
https://codeforces.com/contest/1476/problem/E
*/
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

struct pattern{
  string s;
  int i;
};

bool operator <(const pattern &a, const pattern &b){
  return a.s < b.s;
}

vector<vector<int>> g;
vector<int> used, ord;
bool cyc;

void ts(int v){
  used[v] = 1;
  for (int u : g[v]){
    if (used[u] == 0)
      ts(u);
    else if (used[u] == 1)
      cyc = true;
    if (cyc)
      return;
  }
  used[v] = 2;
  ord.push_back(v);
}

int main() {
    cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n, m, k;
  cin >> n >> m >> k;
  vector<pattern> p(n);
  g.assign(n, vector<int>());
  forn(i, n){
    cin >> p[i].s;
    p[i].i = i;
  }
  sort(p.begin(), p.end());
  pattern nw;
  nw.s = string(k, '_');
  forn(i, m){
    string cur;
    int mt;
    cin >> cur >> mt;
    --mt;
    bool ok = false;
    forn(mask, 1 << k){
      forn(j, k)
        nw.s[j] = ((mask >> j) & 1 ? cur[j] : '_');
      auto it = lower_bound(p.begin(), p.end(), nw);
      if (it != p.end() && it->s == nw.s){
        if (it->i != mt)
          g[mt].push_back(it->i);
        else
          ok = true;
      }
    }
    if (!ok){
      puts("NO");
      return 0;
    }
  }
  used.assign(n, 0);
  cyc = false;
  ord.clear();
  forn(i, n) if (!used[i]){
    ts(i);
    if (cyc){
      cout << "NO\n";
      return 0;
    }
  }
  reverse(ord.begin(), ord.end());
  cout << "YES\n";
  forn(i, n)
    cout << ord[i] + 1 << " ";
  cout << "\n";
  return 0;
}