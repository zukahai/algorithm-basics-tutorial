#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x=sqrt((n-1)/4.0);
    if((2*x+1)*(2*x+1)>=n){
        x--;
    }
    cout<<(2*x+1)*(2*x+1);
}