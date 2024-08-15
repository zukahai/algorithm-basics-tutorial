/*
https://codeforces.com/contest/1477/problem/F
*/
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
//#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#define int long long
using namespace std;
 
#define rep(i,n) for (int i=0;i<(int)(n);++i)
#define rep1(i,n) for (int i=1;i<=(int)(n);++i)
#define range(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const ll mod = (119 << 23) + 1, root = 62; // = 998244353
// For p < 2^30 there is also e.g. 5 << 25, 7 << 26, 479 << 21
// and 483 << 21 (same root). The last two are > 10^9.
 
ll modpow(ll b, ll e) {
	ll ans = 1;
	for (; e; b = b * b % mod, e /= 2)
		if (e & 1) ans = ans * b % mod;
	return ans;
}
 
typedef vector<ll> vl;
void ntt(vl &a) {
	int n = sz(a), L = 31 - __builtin_clz(n);
	static vl rt(2, 1);
	for (static int k = 2, s = 2; k < n; k *= 2, s++) {
		rt.resize(n);
		ll z[] = {1, modpow(root, mod >> s)};
		for(int i=k;i<2*k;++i) rt[i] = rt[i / 2] * z[i & 1] % mod;
	}
	vi rev(n);
	for(int i = 0; i < n; ++i) rev[i] = (rev[i / 2] | (i & 1) << L) / 2;
	for(int i = 0; i < n; ++i) if (i < rev[i]) swap(a[i], a[rev[i]]);
	for (int k = 1; k < n; k *= 2)
		for (int i = 0; i < n; i += 2 * k) for(int j = 0; j < k; ++j) {
			ll z = rt[j + k] * a[i + j + k] % mod, &ai = a[i + j];
			a[i + j + k] = ai - z + (z > ai ? mod : 0);
			ai += (ai + z >= mod ? z - mod : z);
		}
}
vl conv(const vl &a, const vl &b) {
	if (a.empty() || b.empty()) return {};
	int s = sz(a) + sz(b) - 1, B = 32 - __builtin_clz(s), n = 1 << B;
	int inv = modpow(n, mod - 2);
	vl L(a), R(b), out(n);
	L.resize(n), R.resize(n);
	ntt(L), ntt(R);
	for (int i = 0; i < n; ++i) out[-i & (n - 1)] = (ll)L[i] * R[i] % mod * inv % mod;
	ntt(out);
	return {out.begin(), out.begin() + s};
}
 
const int maxn=1007;
 
int n,k;
int l[maxn];
 
struct polynomial{
    int n,m;
    vector<vi> poly;
    polynomial(vector<vi> &po):poly(po){
        n = sz(poly) - 1, m = sz(poly[0]) - 1;
    }
    vi rsz(int nn,int mm){
        assert(nn>n&&mm>m);
        vi ret;
        ret.resize(nn*mm+1,0);
        for (int i=0;i<=n;++i){
            for (int j=0;j<=m;++j){
                ret[i*mm+j]=poly[i][j];
                assert(poly[i][j]<mod&&poly[i][j]>=0);
            }
        }
        return ret;
    }
    
    friend polynomial operator*(polynomial l,polynomial r){
        vector<vi> po;
        po.clear();
        po.resize(l.n+r.n+1,vi(l.m+r.m+1,0));
        auto lpo=l.rsz(l.n+1,l.m+r.m+1),rpo=r.rsz(r.n+1,l.m+r.m+1),res=conv(lpo,rpo);
//        for (auto c:res) cout<<c<<" ";
//        cout<<endl;
//        cout<<sz(lpo)<<" "<<sz(rpo)<<" "<<sz(res)<<endl;
        for (int i=0;i<=l.n+r.n;++i){
            for (int j=0;j<=l.m+r.m;++j){
                po[i][j]=res[i*(l.m+r.m+1)+j];
            }
        }
//        cout<<"hi"<<endl;
        return po;
    }
};
 
vector<polynomial> poly;
int f[5007];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>n>>k;
    f[0]=1;
    rep1(i,5000) f[i]=f[i-1]*i%mod;
    int L=0;
    rep(i,n) cin>>l[i], L+=l[i];
    rep(i,n){
        vi res0,res1;
        res0.clear(), res1.clear();
        res0.pb(1), res1.pb(0);
        int sgn=1;
        rep1(j,l[i]/k){
            int tmp0,tmp1;
            sgn=-sgn;
            if (l[i]==k*j) {
                tmp0=tmp1=0;
            }
            else{
                tmp0=(modpow((l[i]-k*j)*modpow(L,mod-2)%mod,j)%mod)*modpow(f[j],mod-2)%mod, tmp1=(modpow((l[i]-k*j)*modpow(L,mod-2)%mod,j-1)%mod)*modpow(f[j-1],mod-2)%mod;
                if (sgn<0) tmp0=(tmp0?mod-tmp0:tmp0), tmp1=(tmp1?mod-tmp1:tmp1);
            }
//            cerr<<i<<" "<<j<<":"<<tmp0<<" "<<tmp1<<endl;
            res0.pb(tmp0), res1.pb(tmp1);
        }
        vector<vi> p({res0,res1});
        polynomial po(p);
        poly.pb(po);
    }
    for (int k=1;k<=n;k<<=1){
        for (int i=k;i<n;i+=2*k){
            poly[i-k]=poly[i]*poly[i-k];
        }
    }
    int ans=0;
    // x^{j-i}exp((1-k*j/L)) -> (j-i)!/((k*j/L)^{j-i+1}) = (j-i)!L^{j-i+1}/(k*j)^{j-i+1}
    rep(i,poly[0].n+1){
        rep(j,poly[0].m+1){
            if (i>j) {assert(poly[0].poly[i][j]==0); continue;}
            if (j==0) {assert(poly[0].poly[i][j]==1); continue;}
            if (k*j==L) {assert(poly[0].poly[i][j]==0); continue;}
            int num=f[j-i]*modpow(L,j-i+1)%mod,den=modpow(k*j,j-i+1)%mod;
//            cerr<<i<<","<<j<<":"<<poly[0].poly[i][j]<<" "<<num<<" "<<den<<endl;
            ans=(ans+(num*modpow(den,mod-2)%mod)*poly[0].poly[i][j]%mod)%mod;
        }
    }
    if (ans>0) cout<<mod-ans<<endl;     
    else cout<<0<<endl;
    return 0;
}