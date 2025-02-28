#include<bits/stdc++.h>
#define N 1000005
using namespace std;
long long i,n,s,a[N],b,c,d,m,j,r,l,t,q,dp[N],dem;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    // freopen("a.inp","r",stdin);
    //freopen("a.out","w",stdout);
    cin>>n;
    vector<int>v,t(n+1);
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[1]=a[1];
    dp[2]=a[1]+a[2];
    t[1]=-1;
    t[2]=1;
    for(i=3;i<=n;i++)
    {
        if(dp[i-1]>dp[i-2]&&dp[i-1]>dp[i-3])
        {
            dp[i]=dp[i-1]+a[i];
            t[i]=i-1;
        }
        else
        if(dp[i-2]>dp[i-1]&&dp[i-2]>dp[i-3])
        {
            dp[i]=dp[i-2]+a[i];
            t[i]=i-2;
        }
        else
        {
            dp[i]=dp[i-3]+a[i];
            t[i]=i-3;
        }
    }
    cout<<dp[n];
    cout<<endl;
    dem=n;
    while(dem!=-1)
    {
        v.push_back(a[dem]);
        dem=t[dem];
    }
    for(i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";

}