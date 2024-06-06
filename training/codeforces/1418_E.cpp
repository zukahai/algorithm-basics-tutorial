/*
https://codeforces.com/contest/1418/problem/E
*/
#include <bits/stdc++.h>

using namespace std;

const int N = int(2e5) + 9;
const int MOD = 998244353;

int mul(int a, int b) {
    return (a * 1LL * b) % MOD;
}

int bp(int a, int n) {
    int res = 1;
    for (; n > 0; n /= 2) {
        if (n & 1) res = mul(res, a);
        a = mul(a, a);
    }
    
    return res;
}

int inv(int a) {
    int ia = bp(a, MOD - 2);
    assert(mul(a, ia) == 1);
    return ia;
}

int n, m;
int d[N];
long long sd[N];

long long sum (int l, int r) {
    return (sd[r] - sd[l]) % MOD;
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        scanf("%d", d + i);
    sort(d, d + n);
    for (int i = 0; i < n; ++i)
        sd[i + 1] = sd[i] + d[i];
        
    for (int i = 0; i < m; ++i) {
        int a, b;
        scanf("%d%d", &a, &b); // dur, def
        int cnt = (d + n) - lower_bound(d, d + n, b);
        int res = 0;
        if (cnt >= a) {
            res = mul( mul(cnt - a, inv(cnt)), sum(n - cnt, n) );
            res += mul( mul(cnt - a + 1, inv(cnt + 1)), sum(0, n - cnt) );
            res %= MOD;
        }
        printf("%d\n", res);
    }
    
    return 0;
}