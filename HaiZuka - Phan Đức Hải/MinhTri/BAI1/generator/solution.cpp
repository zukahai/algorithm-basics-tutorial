#include <bits/stdc++.h>
using namespace std;
int tong(int n)
{
    int s=0,cs;
    while(n!=0)
    {
        cs=n%10;
        n/=10;
        s+=cs;
    }
    return s;
}
int dem(int n)
{
    int d=0,cs;
    while(n!=0)
    {
        cs=n%10;
        d++;
        n/=10;
    }
    return d;
}
int main()
{
    #ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    #endif
    int n;
     cin>>n;
     vector <int> a(n);
     for(int i=0;i<n;i++) cin>>a[i];
     int C_SO=INT_MIN,so;
     for(int i=0;i<n;i++)
     {
        if(dem(a[i])>C_SO)
        {
                C_SO=dem(a[i]);
                so=a[i];
        }
     }
     cout<<so<<endl;

     int sum=INT_MIN,so_lon;
     for(int i=0;i<n;i++)
    {
        if(tong(a[i])>sum)
        {
            sum=tong(a[i]);
            so_lon=a[i];
        }
     }
     cout<<so_lon;

}