/*
https://codeforces.com/contest/1223/problem/G
*/
#include<bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()

#define x first
#define y second

typedef long long li;
typedef pair<int, int> pt;

const int INF = int(1e9);
const li INF64 = li(1e18);

int n;
vector<int> a;

inline bool read() {
    if(!(cin >> n))
        return false;
    a.resize(n);
    fore(i, 0, n)
        cin >> a[i];
    return true;
}

template<class A>
pair<A, A> upd(const pair<A, A> &mx, const A &val) {
    return {max(mx.x, val), max(mx.y, min(mx.x, val))};
}

vector<int> cnt, sum;
vector<int> prv;

li getSum(int l, int r) {
    return sum[r] - sum[l];
}

li ans, rx, ry;
void updAns(li x, li y) {
    if (x < 2 || y < 2)
        return;
    if (ans >= x * y)
        return;
    ans = x * y;
    rx = x, ry = y;
}

inline void solve() {
    cnt.assign(*max_element(all(a)) + 1, 0);
    fore(i, 0, n)
        cnt[a[i]]++;
    sum.assign(sz(cnt) + 1, 0);
    fore(i, 0, sz(cnt))
        sum[i + 1] = sum[i] + cnt[i];
    prv.assign(sz(cnt), -1);
    fore(i, 0, sz(prv)) {
        if(i > 0)
            prv[i] = prv[i - 1];
        if(cnt[i] > 0)
            prv[i] = i;
    }

    ans = 0;
    fore(y, 2, sz(cnt)) {
        li cntY = 0;
        for(int i = 0; y * i < sz(cnt); i++)
            cntY += i * 1ll * getSum(i * y, min((i + 1) * y, sz(cnt)));

        pair<pt, pt> mx = {{-1, -1}, {-1, -1}};
        int lf = (sz(cnt) - 1) / y * y, rg = sz(cnt);
        while(lf >= 0) {
            int cntMore = (mx.x.x >= 0) + (mx.y.x >= 0);
            int val1 = prv[rg - 1];
            if (val1 >= lf) {
                mx = upd(mx, pt{val1 % y, val1});
                if (cnt[val1] == 1)
                    val1 = prv[val1 - 1];
                if (val1 >= lf)
                    mx = upd(mx, pt{val1 % y, val1});
            }

            if (mx.x.x >= 0) {
                li x = (lf + mx.x.x) / 2;
                li cur = cntY - lf / y;
                updAns(min(cur, x), y);
            }
            if (mx.y.x >= 0) {
                li x = lf + mx.y.x;
                li cur = cntY - 2 * (lf / y);
                updAns(min(cur, x), y);

                if(cntMore + (mx.x.y < rg) >= 2) {
                    x = lf + mx.x.x;
                    cur--;
                    updAns(min(cur, x), y);
                }
            }

            rg = lf;
            lf -= y;
        }
    }
    cout << ans << endl;
    cerr << rx << " " << ry << endl;
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    int tt = clock();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cerr << fixed << setprecision(15);

    if(read()) {
        solve();

#ifdef _DEBUG
        cerr << "TIME = " << clock() - tt << endl;
        tt = clock();
#endif
    }
    return 0;
}