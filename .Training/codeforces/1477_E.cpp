/*
https://codeforces.com/contest/1477/problem/E
*/
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
//#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
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
 
namespace internal {
 
// @param n `0 <= n`
// @return minimum non-negative `x` s.t. `n <= 2**x`
int ceil_pow2(int n) {
    int x = 0;
    while ((1U << x) < (unsigned int)(n)) x++;
    return x;
}
 
}
 
template <class S, S (*op)(S, S), S (*e)()> struct segtree {
  public:
    segtree() : segtree(0) {}
    segtree(int n) : segtree(std::vector<S>(n, e())) {}
    segtree(const std::vector<S>& v) : _n(int(v.size())) {
        log = internal::ceil_pow2(_n);
        size = 1 << log;
        d = std::vector<S>(2 * size, e());
        for (int i = 0; i < _n; i++) d[size + i] = v[i];
        for (int i = size - 1; i >= 1; i--) {
            update(i);
        }
    }
 
    void set(int p, S x) {
        assert(0 <= p && p < _n);
        p += size;
        d[p] = x;
        for (int i = 1; i <= log; i++) update(p >> i);
    }
 
    S get(int p) {
        assert(0 <= p && p < _n);
        return d[p + size];
    }
 
    S prod(int l, int r) {
        assert(0 <= l && l <= r && r <= _n);
        S sml = e(), smr = e();
        l += size;
        r += size;
 
        while (l < r) {
            if (l & 1) sml = op(sml, d[l++]);
            if (r & 1) smr = op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return op(sml, smr);
    }
 
    S all_prod() { return d[1]; }
 
    template <bool (*f)(S)> int max_right(int l) {
        return max_right(l, [](S x) { return f(x); });
    }
    template <class F> int max_right(int l, F f) {
        assert(0 <= l && l <= _n);
        assert(f(e()));
        if (l == _n) return _n;
        l += size;
        S sm = e();
        do {
            while (l % 2 == 0) l >>= 1;
            if (!f(op(sm, d[l]))) {
                while (l < size) {
                    l = (2 * l);
                    if (f(op(sm, d[l]))) {
                        sm = op(sm, d[l]);
                        l++;
                    }
                }
                return l - size;
            }
            sm = op(sm, d[l]);
            l++;
        } while ((l & -l) != l);
        return _n;
    }
 
    template <bool (*f)(S)> int min_left(int r) {
        return min_left(r, [](S x) { return f(x); });
    }
    template <class F> int min_left(int r, F f) {
        assert(0 <= r && r <= _n);
        assert(f(e()));
        if (r == 0) return 0;
        r += size;
        S sm = e();
        do {
            r--;
            while (r > 1 && (r % 2)) r >>= 1;
            if (!f(op(d[r], sm))) {
                while (r < size) {
                    r = (2 * r + 1);
                    if (f(op(d[r], sm))) {
                        sm = op(d[r], sm);
                        r--;
                    }
                }
                return r + 1 - size;
            }
            sm = op(d[r], sm);
        } while ((r & -r) != r);
        return 0;
    }
 
  private:
    int _n, size, log;
    std::vector<S> d;
 
    void update(int k) { d[k] = op(d[2 * k], d[2 * k + 1]); }
};
 
 
const int maxn=500007;
const int maxm=1000007;
int n,m,k,q,t;
ll sum;
int a[maxn],b[maxn];
 
struct S{
    int cnt;
    ll sum;
};
 
S e(){
    return {0,0};
}
 
S op(S l,S r){
    return {l.cnt+r.cnt,l.sum+r.sum};
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    segtree<S,op,e> seg_a(maxm),seg_b(maxm);
    auto fa=[&](int x){
        if (x>m||x<=0) cerr<<x<<endl;
        assert(x<=m&&x>0);
        return seg_a.max_right(0,[&](S l){return l.cnt<x;});
    };
    auto fb=[&](int x){
        assert(x<=n&&x>0);
        return seg_b.max_right(0,[&](S l){return l.cnt<x;});
    };
    auto solve=[&](int start,int coef){
//        cerr<<"start coef:"<<start<<" "<<coef<<endl;
        int mn=min(fa(1),fb(1));
        if (start<=k+mn) return 1ll*(n-m)*start+sum;
        auto ret=seg_b.prod(0,start-k);
//        cerr<<"ret:"<<ret.cnt<<" "<<ret.sum<<endl;
        return 1ll*coef*(start-k-mn)+1ll*(n-m)*start+sum+ret.sum-1ll*ret.cnt*(start-k);
    };
    cin>>m>>n>>q;
    rep1(i,m) {cin>>a[i],sum+=a[i]; auto ret=seg_a.get(a[i]); ret.cnt++, ret.sum+=a[i], seg_a.set(a[i],ret);}
    rep1(i,n) {cin>>b[i],sum-=b[i]; auto ret=seg_b.get(b[i]); ret.cnt++, ret.sum+=b[i], seg_b.set(b[i],ret);}
    sum+=1ll*(m-n)*k;
    auto res=[&](){
        ll ans=-1e15;
        ans=max(ans,solve(fb(1),m));
        ans=max(ans,solve(fb(n),m));
        ans=max(ans,solve(fa(1),m-1));
        ans=max(ans,solve(fa(m),m-1));
        int threshold=n>1?fb(n-1):0;
        if (k+threshold<=1e6){
            int pos=max(seg_a.prod(0,k+threshold).cnt,1);
            ans=max(ans,solve(fa(pos),m-1));
            int nxt_pos=seg_a.max_right(0,[&](S l){return l.cnt<=pos;});
            if (nxt_pos<maxm) ans=max(ans,solve(nxt_pos,m-1));
        }
        cout<<ans<<"\n";
    };
    while (q--){
        int op,idx,x;
        cin>>op;
        if (op==1){
            cin>>idx>>x;
            auto ret=seg_a.get(a[idx]);
            ret.cnt--, ret.sum-=a[idx];
            seg_a.set(a[idx],ret);
            sum-=a[idx];
            sum+=x;
            a[idx]=x;
            ret=seg_a.get(x);
            ret.cnt++, ret.sum+=x;
            seg_a.set(x,ret);
        } 
        if (op==2){
            cin>>idx>>x;
            auto ret=seg_b.get(b[idx]);
            ret.cnt--, ret.sum-=b[idx];
            seg_b.set(b[idx],ret);
            sum+=b[idx];
            sum-=x;
            b[idx]=x;
            ret=seg_b.get(x);
            ret.cnt++, ret.sum+=x;
            seg_b.set(x,ret);
        }
        if (op==3){
            cin>>k;
            sum+=(m-n)*k;
            res();
            sum-=(m-n)*k;
        }
    }  
    return 0;
}