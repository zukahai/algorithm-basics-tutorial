/*
https://codeforces.com/contest/1461/problem/E
*/
#include <bits/stdc++.h>
 
#define fi first
#define se second
#define m_p make_pair
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
 
using namespace std;
 
typedef long long ll;
 
const int MAXN = 1123456;
const int MAXINT = 2147483098;
const ll MAXLL = 8000000000000000000LL;
const long double eps = 1e-9;
 
mt19937_64 mt_rand(
        chrono::system_clock::now().time_since_epoch().count()
);
 
 
int main()
{
    fast_io;
 
    ll k, l, r, t, x, y;
    cin >> k >> l >> r >> t >> x >> y;
    if (k < l || k > r) return cout << "No\n", 0;
    
    if (x > y) {
        if (k + y > r) k -= x, t--;
        
        if (k < l) return cout << "No\n", 0;
        
        ll canAlive = (k - l) / (x - y);
        if (canAlive < t) return cout << "No\n", 0;
        
        cout << "Yes" << endl;
    }else {
        vector <bool> was(x, false);
        while(t > 0) {
            if (was[k % x]) return cout << "Yes" << endl, 0;
            was[k % x] = true;
            
            ll canMove = min(t, (k - l) / x);
            k -= canMove * x;
            t -= canMove;
            if (t == 0) return cout << "Yes" << endl, 0;
            t--;
            if (k + y <= r) k += y;
            k -= x;
            if (k < l || k > r) return cout << "No" << endl, 0; 
            
        }
        
        cout << "Yes" << endl;
        
    }
 
    return 0;
}