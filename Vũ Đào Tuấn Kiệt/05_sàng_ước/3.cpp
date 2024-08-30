#include<bits/stdc++.h>
using namespace std;
#define int long long
map<int,int> m;
const int mod = 1e9 + 7;

int fibo(int n)
{
    if(m.find(n) != m.end())
    return m[n];
    
    
    int k = n/2;
    if(n%2==0)
    m[n] = (fibo(k) * (fibo(k - 1) + fibo(k + 1))%mod)%mod;
    else
    m[n] = ((fibo(k) * fibo(k)) % mod + (fibo(k+ 1)*fibo(k + 1)) %mod )%mod;
    //cout << m[n] << '\n';
    
   return m[n];
}

main()
{
    // ios_base::sync_witH_stdio(0);
    // cin.tie(0);
    
    int n;
    cin >> n;
    m[0] = 1;
    m[1] = 1;
    m[2] = 1;
    fibo(n);
    
    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first <<   ' ' << i->second << '\n';
     }
    
    cout << m[n];
    
}