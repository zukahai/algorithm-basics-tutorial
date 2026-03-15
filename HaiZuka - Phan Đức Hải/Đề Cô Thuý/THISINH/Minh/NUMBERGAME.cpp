#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int luythua(int n)
{
    int i;
    for(i=1;i<=n;i++)
    if(2*i>n) if(i-1==0) return 1; else return i-1;
    return i;
}
int main()
{
    freopen("NUMBERGAME.INP","r",stdin);
    freopen("NUMBERGAME.out","w",stdout);
    int n,dem=0;
    cin>>n;
    while(n>0)
    {
        dem++;
        n=n-2*luythua(n);
        if(n<=0) break;
    }
    if(dem%2==0) cout<<"Linh";
    else cout<<"Hai";
    return 0;
}
