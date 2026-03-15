#include <bits/stdc++.h>

using namespace std;
bool scp(int a)
{
    if(a<=0) return 0;
    int kt=sqrt(a);
        if(kt*kt==a)
        return 1;
    return 0;
}
int main()
{
    freopen("GARDEN.INP","r",stdin);
    freopen("GARDEN.OUT","w",stdout);
    long long m1=1,m2=1,n;
    cin>>n;
    while(scp(2*(n+m1))!=1)
        m1++;
    while(scp(m2*n)!=1)
        m2++;
    cout << m1<<" "<<m2;
    return 0;
}
