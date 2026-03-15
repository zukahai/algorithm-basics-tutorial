#include <bits/stdc++.h>

using namespace std;
int dem(int a,int b)
{
    int m=a;
    if(m>b)
        m=b;
    return m;
}
string s;
int i,j,m=-1,d[250],kt[250];
int main()
{
    freopen("BUTTONS.INP","r",stdin);
    freopen("BUTTONS.OUT","w",stdout);
    getline (cin,s);
    for(i=0;i<s.size();i++)
    d[(int)s[i]]++;
    for(i=97;i<122;i++)
        for(j=i+1;j<=122;j++)
            if(dem(d[i],d[j])>m)
                m=dem(d[i],d[j]);
    for(i=97;i<122;i++)
        for(j=i+1;j<=122;j++)
            if(dem(d[i],d[j])==m)
            {
                kt[i]=1;
                kt[j]=1;
            }
    for(i=97;i<=122;i++)
        if(kt[i]==1)
    cout << (char)i;
    return 0;
}
