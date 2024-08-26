#include<bits/stdc++.h>

using namespace std;
int main() {
  long long n, x, tong, a, b;
  tong = 0;
  long long m = 1000000007;
  cin >> x;
  while (x--) {
    cin >> a >> b;
    if (a > b) {
      cout << 0 << endl;
      continue;
    }
      if ((a + b) % 2 == 0) {
        long long n = ((a + b) / 2) % m;
        tong = n * (b - a + 1) % m;
      } else if ((b - a + 1) % 2 == 0) {
        long long n = ((b - a + 1) / 2) % m;
        tong = n * (a + b) % m;
      }
      cout << tong;
    
  }

}