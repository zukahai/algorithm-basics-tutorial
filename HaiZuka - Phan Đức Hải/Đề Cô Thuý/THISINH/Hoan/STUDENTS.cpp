#include <iostream>
#define N int(1e4)
using namespace std;
long long  n,k,i,a[N+2],m[N+2],t[N+1];
int max1(long long b[],int m)
{
    int mi=-999999;
    for(int j=0;j<m;j++)
        if(a[j]>mi)
        mi=a[j];
    return mi;
}
int vt(long long b[],int m)
{
    int j,vt;
    int mi=-999999;
    for(int j=0;j<m;j++)
        if(a[j]>mi)
        {
        mi=a[j];
        vt=j;
        }
    return vt;
}
int sx(long long b[],int h)
{
    for(i=0;i<h;i++)
            t[0]=t[0]*10+b[i];
    for(i=1;i<h;i++)
    {
        t[i]=(t[i-1]-b[i])/10+(b[i]*((((t[i-1]-b[i])/10)/10)+1));
    }
    return max1(t,h);
}
int main()
{
    freopen("STUDENTS.INP","r",stdin);
    freopen("STUDENTS.OUT","w",stdout);
    int q=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<k;i++)
    {
    m[q]=max1(a,n);
    a[vt(a,n)]=0;
    q++;
    }
    cout << sx(m,k) << endl;
    return 0;
}
