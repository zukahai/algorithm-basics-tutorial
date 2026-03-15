#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
bool ktr(long long n)
{
    if(n<=0) return 0;
    long long gan=sqrt(n);
    if(gan*gan==n)
        return 1;
    else return 0;
}
int main()
{
     freopen("GARDEN.INP","r",stdin);
     freopen("GARDEN.OUT","w",stdout);
    long long n,cv=0,dt=0,i=1;
    cin>>n;
    while(i!=0)
    {
    if (ktr((2*(n+i)))==1) { cv=i; break; }
    else i++;
    }
    i=1;
    while(i!=0)
    {
    if (ktr((n*i))==1) { dt=i; break; }
    else i++;
    }
    cout<<cv<<" "<<dt;
    return 0;
}
