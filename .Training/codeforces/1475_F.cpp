/*
https://codeforces.com/contest/1475/problem/F
*/
#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

bool check(vector<vector<int>> a, vector<vector<int>> const &b) {
  int n = (int) a.size();
  for (int j = 0; j < n; j++) {
    if (a[0][j] != b[0][j]) {
      for (int i = 0; i < n; i++) {
        a[i][j] ^= 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    int need_xor = (a[i][0] ^ b[i][0]);
    for (int j = 1; j < n; j++) {
      if (need_xor != (a[i][j] ^ b[i][j])) {
        return false;
      }
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  vector<vector<int>> b(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      a[i][j] = s[j] - '0';
    }
  }
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      b[i][j] = s[j] - '0';
    }
  }

  for (int times = 0; times < 2; times++) {
    if (check(a, b)) {
      cout << "YES\n";
      return;
    }
    for (int j = 0; j < n; j++) {
      a[0][j] ^= 1;
    }
  }
  cout << "NO\n";
}

int main() {
  int test;
  cin >> test;
  while (test-- > 0) {
    solve();
  }
  return 0;
}