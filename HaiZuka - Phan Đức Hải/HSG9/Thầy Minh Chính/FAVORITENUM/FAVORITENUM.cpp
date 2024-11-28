#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("FAVORITENUM.INP");
    ofstream cout("FAVORITENUM.OUT");
    
    long long x, y, n;
    cin >> x >> y >> n;
    long long hai = n / x;
    long long linh = n / y;
    long long lcm = x * y / __gcd(x, y);
    long long hai_linh = n / lcm;
    long long ans = hai + linh - hai_linh;
    cout << ans;
}
