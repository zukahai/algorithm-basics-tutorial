/*
https://codeforces.com/contest/1472/problem/F
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;
  map<int, int> v;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    v[y] |= (1 << (x - 1));
  }
  const int FULL = 3;
  v[2e9] = FULL;
  int hasLast = 0, lastColor = 0;
  for (auto[x, mask] : v) {
    if (mask != FULL && hasLast) {
      int color = (x + mask) % 2;
      if (lastColor == color) {
        cout << "NO\n";
        return;
      } else {
        hasLast = false;
      }
    } else if (mask == FULL && hasLast) {
        cout << "NO\n";
        return;
    } else if (mask != FULL) {
      lastColor = (x + mask) % 2;
      hasLast = true;
    }
  }
  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}