/*
https://codeforces.com/contest/1477/problem/A
*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
 
const int maxn=200007;
int t;
int n,k;
int x[maxn];
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>t;
    while (t--){
        cin>>n>>k;
        for (int i=0;i<n;++i) cin>>x[i];
        sort(x,x+n);
        int g=0;
        for (int i=1;i<n;++i){
            g=__gcd(g,x[i]-x[0]);
        }
        if ((k-x[0])%g) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}