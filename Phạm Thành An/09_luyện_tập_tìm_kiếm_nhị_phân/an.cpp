#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tknp(ll n, ll can, ll maxtime, vector<ll>& a) {
    ll l = 1, r = maxtime;
    ll res = 0;
    while (l <= r) {
        ll m = (l + r) / 2;
        ll x = 0;
        for(ll i = 1; i<=n; i++){
            x+=m/a[i];
            if(x>=can) break;
        }
        if (x >= can) { 
            res = m; 
            r = m - 1; 
            cout << "Res: " << res << endl;
        } else {
            l = m + 1; 
        }
    }
    return res;
}

int main() {
    ll n,m,min=1e9+1;
    cin >> n >> m;
    vector<ll> a(n+1);
    for(ll i = 1; i<=n;i++){
        cin >> a[i];
        if(a[i]<min) min = a[i];
    }
    ll maxtime = min*m;
    cout << tknp(n,m,maxtime,a);
    return 0;
}
