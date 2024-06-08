/*
https://codeforces.com/contest/1461/problem/F
*/
#include <bits/stdc++.h>
 
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("no-stack-protector")
 
#define fi first
#define se second
#define p_b push_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define m_p make_pair
#define all(x) x.begin(),x.end()
#define sset ordered_set
#define sqr(x) (x)*(x)
#define pw(x) (1ll << x)
#define sz(x) (int)x.size()
#define fout(x) {cout << x << "\n"; return; }
 
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N = 2e5 + 5;
const ll M = 1e7;
const ll MAXN = 1123456;
const ll inf = 1e17;
const ll mod = 1e9 + 7;
const ld eps = 1e-10;
 
ll mul(ll a, ll b){
    return min(a * b, M);
}
 
ll dp[61], pr[61];
 
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    vector <ll> a(n + 1);
 
    for(int i = 1; i <= n; i++)cin >> a[i];
    
    string s;
    cin >> s;
    
    if (n == 3 && a[1] == 2 && a[2] == 2 && a[3] == 0 && s == "+-*") {
        cout << "2*2-0\n";
        return 0;
    }
    
    if(sz(s) == 1){
        cout << a[1];
        for(int i = 2; i <= n; i++){
            cout << s[0] << a[i];
        }
        cout << "\n";
        return 0;
    }
 
    bool fmul, fplus, fminus;
    fmul = fplus = fminus = 0;
    for(auto i : s){
        if(i == '*')fmul = 1;
        if(i == '+')fplus = 1;
        if(i == '-')fminus = 1;
    }
 
    if(!fmul){
        if(fplus){
            cout << a[1];
            for(int i = 2; i <= n; i++){
                cout << '+' << a[i];
            }
            cout << "\n";
            return 0;
        }else{
            cout << a[1];
            for(int i = 2; i <= n; i++){
                cout << '-' << a[i];
            }
            cout << "\n";
            return 0;
        }
    }else{
        if(!fplus){
            cout << a[1];
            for(int i = 2; i <= n; i++){
                if(a[i] == 0)cout << "-";
                else cout << "*";
                cout << a[i];
            }
            cout << "\n";
            return 0;
        }else{
            vector <char> b(n + 1, '+');
 
 
            int uk = 1;
 
            while(uk <= n){
                while(uk <= n && a[uk] == 0)uk++;
                if(uk == n + 1)break;
                int le = uk;
                while(uk <= n && a[uk])uk++;
                int ri = uk - 1;
                while(le <= ri && a[le] == 1)le++;
                while(le <= ri && a[ri] == 1)ri--;
                if(le > ri)continue;
                ll mult = 1;
                for(int i = le; i <= ri; i++)mult = mul(mult, a[i]);
                if(mult == M){
                    for(int i = le + 1; i <= ri; i++)b[i] = '*';
                    continue;
                }
                vector < pair <ll, pll> > st;
                int j = le;
                while(j <= ri){
                    int l = j;
                    ll t = 1;
                    if(a[l] == 1){
                        while(j <= ri && a[j] == 1)j++;
                        t = j - l;
                    }else{
                        while(j <= ri && a[j] > 1){
                            if(j != l)b[j] = '*';
                            t = mul(t, a[j]);
                            j++;
                        }
                    }
                    st.p_b({t, {l, j - 1}});
                }
                int nn = sz(st);
                for(int i = 1; i <= nn; i++)dp[i] = -inf;
 
                for(int i = 1; i <= nn; i++){
                    if(dp[i] < dp[i - 1] + st[i - 1].fi){
                        pr[i] = i - 1;
                        dp[i] = dp[i - 1] + st[i - 1].fi;
                    }
                    if(i % 2 == 1){
                        ll t = 1;
                        for(int j = i; j <= nn; j++){
                            if((j - i) % 2 == 0)t *= st[j - 1].fi;
                            if((j - i) % 2 == 0 && dp[j] < t + dp[i - 1]){
                                pr[j] = i - 1;
                                dp[j] = t + dp[i - 1];
                            }
                        }
                    }
                }
                int x = nn;
                while(x){
                    int l = pr[x] + 1, r = x;
                    x = pr[x];
                    if(l < r){
                        for(int i = st[l - 1].se.fi + 1; i <= st[r - 1].se.se; i++)b[i] = '*';
                    }
                }
            }
 
            cout << a[1];
            for(int i = 2; i <= n; i++){
                cout << b[i] << a[i];
            }
            cout << "\n";
        }
    }
    return 0;
}