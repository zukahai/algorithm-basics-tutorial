/*
https://codeforces.com/contest/1451/problem/E2
*/
#include <bits/stdc++.h>
#define int long long
using pii=std::pair<int,int>;
using namespace std;
 
const int maxn = (1ll << 16) + 5, minn = 4, maxncheck = (1ll << 16);
 
int n, xorvals[maxn], ans[maxn];
vector<int> pos[maxn];
 
int queries(string s, int i, int j)
{
    cout << s << " " << i << " " << j << endl;
    cout.flush();
    int dest;
    cin >> dest;
    if(dest == -1)
        exit(0);
    return dest;
}
 
int32_t main()
{
    cin >> n;
    assert(n >= minn && n <= maxncheck && __builtin_popcount(n) == 1);
    xorvals[1] = 0;
    pos[0].push_back(1);
    for(int i = 2; i <= n; i++)
    {
        xorvals[i] = queries("XOR", 1, i);
        pos[xorvals[i]].push_back(i);
    }
    int a = 1, b = -1, c = -1;
    int same = -1;
    for(int i = 0; i < n; i++)
        if(pos[i].size() > 1)
        {
            b = pos[i][0];
            c = pos[i][1];
            same = i;
        }
    if(same == -1)
    {
        // If a_b ^ a_c == n - 1, then a_b & a_c = 0 
        for(int i = 2; i <= 3; i++)
            for(int j = i + 1; j <= n; j++)
                if((xorvals[i] ^ xorvals[j]) == n - 1)
                {
                    b = i;
                    c = j;
                }
        int xorab = xorvals[a] ^ xorvals[b], xorac = xorvals[a] ^ xorvals[c], xorbc = xorvals[b] ^ xorvals[c];
        int andab = queries("AND", a, b);
        int andac = queries("AND", a, c);
        int andbc = 0;
        int x = xorab + 2 * andab;
        int y = xorac + 2 * andac;
        int z = xorbc + 2 * andbc;
        assert((x + y - z) % 2 == 0);
        ans[a] = (x + y - z) / 2;
    }
    else
    {
        // if a_1 ^ a_b == a_1 ^ a_c, then a_b = a_c = (a_b & a_c)
        ans[b] = queries("AND", b, c);
        ans[1] = xorvals[b] ^ ans[b];
    }
    for(int i = 2; i <= n; i++)
        ans[i] = (xorvals[i] ^ ans[1]);
    cout << "! ";
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
    cout.flush();
    return 0;
}