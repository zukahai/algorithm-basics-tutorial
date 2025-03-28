#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,x,k,kq;
vector<int> a;
int sodaycon(ll x){
    ll kq=0;
    for (int i=0;i<a.size();i++){
        ll temp=a[i];
        if (temp>x){
            return INT_MAX;
        }else{
            for (int j=i+1;j<a.size();j++){
                temp+=a[j];
                if (temp>x){
                    kq++;
                    i=j-1;break;
                }
            }
        }
    }return kq;
}
int main() {
	cin>>n>>k;a.resize(n);
	for (int i=0;i<n;i++){
	    cin>>a[i];
	}
    cout << sodaycon(5 * 1e13) << endl;
	// ll l=1,r=ll(pow(10,14));
	// while (l<=r){
	//     ll mid=(l+r)/2;
    //     cout << "mid " << mid << endl;
	
	//     if (sodaycon(mid)<=k){
	//         kq=mid;
	//         r=mid-1;
    //         cout << "r " << r << endl;
	//     }else{
	//         l=mid+1;
	//     }
	// }cout<<kq;
    // return 0;
}