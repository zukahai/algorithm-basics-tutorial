#include <iostream>
#define N int(1e5)
#include <bits/stdc++.h>
using namespace std;
int ktr(int a)
{
    long long dem=0;
    for(int i=1;i<a;i++)
        if(a%i==0) dem++;
    if(dem==2) return 1;
    else return 0;
}
int main()
{
    freopen("FANDOM.INP","r",stdin);
    freopen("FANDOM.OUT","w",stdout);
    long long n,k,dem1=0,dem2=0,a[N];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(ktr(a[1]==1)&&(ktr(a[n])==1)&&(k>=2))
    for(int i=1;i<=n;i++)
        if(ktr(a[i])==1) dem1++;
        else dem2++;
    cout<<dem1*(dem1-1)/2+dem2*(dem2-1)/2;
    return 0;
}
