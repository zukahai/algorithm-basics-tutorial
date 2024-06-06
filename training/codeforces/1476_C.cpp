/*
https://codeforces.com/contest/1476/problem/C
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long li;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> c(n), a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> c[i];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    
    li ans = 0;
    li lstLen = 0;
    for (int i = 1; i < n; i++) {
      li curLen = c[i] + 1ll + abs(a[i] - b[i]);
      if (a[i] != b[i])
        curLen = max(curLen, c[i] + 1ll + lstLen - abs(a[i] - b[i]));
      ans = max(ans, curLen);
      lstLen = curLen;  
    }
    cout << ans << endl;
  }
  return 0;
};