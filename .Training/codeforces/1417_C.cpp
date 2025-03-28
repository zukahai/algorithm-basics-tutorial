/*
https://codeforces.com/contest/1417/problem/C
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

const int MAXN = (int)3e5 + 5;

int f[MAXN], last[MAXN], arr[MAXN], ans[MAXN];
int n;

void solve() {
  scanf("%d", &n);
  
  for (int i = 1; i <= n; ++i) {
    f[i] = last[i] = 0;
    ans[i] = -1;
  }
  
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &arr[i]);
  }
  
  for (int i = 1; i <= n; ++i) {
    int x = arr[i];
    f[x] = max(f[x], i - last[x]);
    last[x] = i;
  }
  
  for (int x = 1; x <= n; ++x) {
    f[x] = max(f[x], n - last[x] + 1);
    
    for (int i = f[x]; i <= n && ans[i] == -1; ++i) {
      ans[i] = x;
    }
  }
  
  for (int i = 1; i <= n; ++i) {
    printf("%d%c", ans[i], " \n"[i == n]);
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