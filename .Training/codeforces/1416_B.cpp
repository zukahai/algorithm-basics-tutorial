/*
https://codeforces.com/contest/1416/problem/B
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

const int MAXN = (int)1e4 + 5;

vector<array<int, 3>> ans;
int arr[MAXN];
int n;

void go(int x, int y, int z) {
  arr[x] -= x * z;
  arr[y] += x * z;
  ans.pb({x, y, z});
}

void solve() {
  scanf("%d", &n);
  
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &arr[i]);
  }
  
  ans.clear();
  int sum = accumulate(arr + 1, arr + n + 1, 0);
  
  if (sum % n) {
    printf("-1\n");
    return;
  }
  
  for (int i = 2; i <= n; ++i) {
    if (arr[i] % i) {
      go(1, i, i - arr[i] % i);
    }
    
    go(i, 1, arr[i] / i);
  }
  
  for (int i = 2; i <= n; ++i) {
    go(1, i, sum / n);
  }
  
  for (int i = 1; i <= n; ++i) {
    assert(arr[i] == sum / n);
  }
  
  assert((int)ans.size() <= 3 * n);
  printf("%d\n", (int)ans.size());
  
  for (auto &[x, y, z] : ans) {
    printf("%d %d %d\n", x, y, z);
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