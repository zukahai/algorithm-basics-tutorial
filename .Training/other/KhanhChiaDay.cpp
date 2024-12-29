#include <bits/stdc++.h>
#define N 100005
#define ll long long
using namespace std;

ll n, a[N], k, x, j=0;
int solve(int x)
{
    if (a[1] > x) return 1e9;
    int cnt=0,i=0;
    while (i<n){
        int t=upper_bound(a+i+1, a+n+1, a[i] + x) - a - 1;
        cnt++;
        i=t;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> x;
        a[i] = a[i-1] + x;
        if (i > 1) j=max(j, a[i] - a[i-1]);
    }
    ll l=j, r=a[n], mid, c, res;
    while (l <= r){
        mid=(l+r)/2;
        c=solve(mid);
        cout << mid << " " << c << endl;
        if (c<=k) r=mid-1, res=mid;
        else l=mid+1;
    }
    cout <<  res;
}