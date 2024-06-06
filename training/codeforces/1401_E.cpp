/*
https://codeforces.com/contest/1401/problem/E
*/
#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

struct H{int k, l, r;};

const int p = 1048576;

LL l[2100000], r[2100000], z[2100000];

H h[100005], v[200040];

int C(H a, H b){return a.k < b.k;}
int D(H a, H b){return a.l < b.l || a.l == b.l && a.r > b.r;}

LL sum(int x, int y, int d) // find the sum of range [x, y]
{
    if(x <= l[d] && r[d] <= y)
	return z[d];

    if(x > r[d] || y < l[d])
	return 0;

    return sum(x, y, d << 1) + sum(x, y, (d << 1) + 1);
}

void REP(int i, LL k) // add k to i-th number
{
    i += p;

    for(z[i] += k; i >>= 1;)
	z[i] = z[i << 1] + z[(i << 1) + 1];
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    LL m, n, s = 1;

    cin >> n >> m;

    for(int i = 0; i < p; i++)
	l[i + p] = r[i + p] = i;

    for(int i = p; --i;)
    {
	l[i] = l[i << 1];
	r[i] = r[(i << 1) + 1];
    }

    for(int i = 0; i < n; i++)
    {
	cin >> h[i].k >> h[i].l >> h[i].r;

	if(h[i].r - h[i].l == 1000000)
	    s++;
    }

    sort(h, h + n, C);

    for(int i = 0; i < m; i++)
    {
	int j = i << 1;

	cin >> v[j].k >> v[j].l >> v[j+1].l;

	v[j + 1].k = v[j].k;
	v[j].r = 1;
	v[j + 1].r = -1;

	if(v[j + 1].l - v[j].l == 1000000)
	    s++;
    }

    sort(v, v + 2 * m, D);

    for(int i = 0, j = 0; i < n && j < 2 * m;)
    {
	if(h[i].k < v[j].l || h[i].k == v[j].l && v[j].r < 0)
	{
	    s += sum(h[i].l, h[i].r, 1);
	    i++;
	}
	else
	{
	    REP(v[j].k, v[j].r);
	    j++;
	}
    }

    cout << s;

    return 0;
}