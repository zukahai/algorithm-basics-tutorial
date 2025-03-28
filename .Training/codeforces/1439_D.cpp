/*
https://codeforces.com/contest/1439/problem/D
*/
#include <bits/stdc++.h>
#pragma GCC optimize ("O2,unroll-loops")
//#pragma GCC optimize("no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef pair<ll, ll> pll;
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define debugp(x) cerr<<#x<<"= {"<<(x.first)<<", "<<(x.second)<<"}"<<endl;
#define debug2(x, y) cerr<<"{"<<#x<<", "<<#y<<"} = {"<<(x)<<", "<<(y)<<"}"<<endl;
#define debugv(v) {cerr<<#v<<" : ";for (auto x:v) cerr<<x<<' ';cerr<<endl;}
#define all(x) x.begin(), x.end()
#define pb push_back
#define kill(x) return cout<<x<<'\n', 0;

const ld eps=1e-7;
const int inf=1000000010;
const ll INF=10000000000000010LL;
const int MAXN=505, LOG=20;

ll n, m, k, u, v, x, y, t, a, b, ans, mod;
ll dp1[MAXN], dp2[MAXN];
ll dp3[MAXN][MAXN], dp4[MAXN][MAXN];
ll C[MAXN][MAXN];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin>>n>>m>>mod;
	
	for (int i=0; i<MAXN; i++){
		C[i][0]=C[i][i]=1;
		for (int j=1; j<i; j++) C[i][j]=(C[i-1][j] + C[i-1][j-1])%mod;
	}
	dp1[0]=1;
	for (int n=1; n<MAXN; n++){
		for (int i=1; i<=n; i++) dp1[n]=(dp1[n] + dp1[i-1]*dp1[n-i]%mod*C[n-1][i-1])%mod;
		dp1[n]=(n+1)*dp1[n]%mod;
		for (int i=1; i<=n; i++){
			dp2[n]=(dp2[n] + (n+1)*C[n-1][i-1]%mod*((dp1[i-1]*dp2[n-i] + dp2[i-1]*dp1[n-i])%mod))%mod;
			dp2[n]=(dp2[n] + C[n-1][i-1]*dp1[i-1]%mod*dp1[n-i]%mod*((i*(i-1)/2+(n-i)*(n-i+1)/2)%mod))%mod;
		}
	}
	
	dp3[0][0]=1;
	for (int n=1; n<MAXN; n++){
		for (int m=0; m<n; m++){
			dp3[n][m]=dp3[n-1][m];
			dp4[n][m]=dp4[n-1][m];
			for (int i=1; i<=m; i++){
				dp3[n][m]=(dp3[n][m] + dp3[n-i-1][m-i]*dp1[i]%mod*C[m][i])%mod;
				dp4[n][m]=(dp4[n][m] + dp3[n-i-1][m-i]*dp2[i]%mod*C[m][i])%mod;
				dp4[n][m]=(dp4[n][m] + dp4[n-i-1][m-i]*dp1[i]%mod*C[m][i])%mod;
			}
		}
		dp3[n][n]=dp1[n];
		dp4[n][n]=dp2[n];
	}

	cout<<dp4[n][m]<<"\n";	
	
	return 0;
}