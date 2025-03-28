/*
https://codeforces.com/contest/1417/problem/E
*/
#include <bits/stdc++.h>

#define __DBG 1
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define debug(x) if (__DBG) cerr << #x << " = " << x << endl;

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAXN = (int)5e5 + 5;

int arr[MAXN];
int n;

void solve() {
  scanf("%d", &n);
  
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &arr[i]);
  }
  
  int zero = 0, two = -1;
  set<pll> one;
  ll shifter = 0;
  int sign = 1;
  
  for (int i = 1; i <= n; ++i) {
    int x = arr[i];
    
    if (two != -1) {
      zero += 2;
      sign = 1;
      shifter = 0;
      one.clear();
      
      if (two < x) {
        one.insert(mp(x - two, x - two));
      }
    }
    else if (!one.empty()) {
      zero++;
      
      if (sign == -1) {
        // shifter - idx >= x
        // shifter - x >= idx
        // idx <= shifter - x
        ll lim = shifter - x;
        
        while (!one.empty() && one.begin() -> se <= lim) {
          one.erase(one.begin());
        }
        
        if (!one.empty() && one.begin() -> fi <= lim) {
          pll it = mp(lim + 1, one.begin() -> se);
          one.erase(one.begin());
          assert(it.fi <= it.se);
          one.insert(it);
        }
      }
      else {
        // shifter + idx >= x
        // idx >= x - shifter
        ll lim = x - shifter;
        
        while (!one.empty() && one.rbegin() -> fi >= lim) {
          one.erase(--one.end());
        }
        
        if (!one.empty() && one.rbegin() -> se >= lim) {
          pll it = mp(one.rbegin() -> fi, lim - 1);
          one.erase(--one.end());
          assert(it.fi <= it.se);
          one.insert(it);
        }
      }
      
      shifter = x - shifter;
      sign *= -1;
    }
    else {
      sign = -1;
      shifter = x;
      int lim = min(arr[i - 1] - 1, x - 1);
      
      if (1 <= lim) {
        one.insert(mp(1, lim));
      }
    }
    
    // consider x/2!
    two = -1;
    
    if (x % 2 == 0) {
      int y = x / 2;
      ll val = (y - shifter) / sign;
      auto it = one.lower_bound(mp(val + 1, (ll)-1e18));
      bool found = 0;
      
      if (it != one.begin()) {
        --it;
        
        if (it -> fi <= val && val <= it -> se) {
          found = 1;
        }
      }
      
      if (found) {
        two = y;
      }
      else {
        one.insert(mp(val, val));
      }
    }
  }
  
  int ans;
  
  if (two != -1) {
    ans = zero + 2;
  }
  else if (!one.empty()) {
    ans = zero + 1;
  }
  else {
    ans = zero;
  }
  
  printf("%d\n", 2 * n - ans);
}

int main() {
  int tt;
  scanf("%d", &tt);
  
  while (tt--) {
    solve();
  }

  return 0;
}