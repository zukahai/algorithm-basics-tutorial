/*
https://codeforces.com/contest/1451/problem/E1
*/
#include <bits/stdc++.h>
#define int long long
using pii=std::pair<int,int>;
using namespace std;
 
const int maxn = (1ll << 16) + 5, minn = 4, maxncheck = (1ll << 16);
 
int n, xorvals[maxn], ans[maxn];
 
void andqueries(string s, int& dest)
{
    cout << s << endl;
    cout.flush();
    cin >> dest;
    if(dest == -1)
        exit(0);
    return;
}
 
int32_t main()
{
    cin >> n;
    assert(n >= minn && n <= maxncheck && __builtin_popcount(n) == 1);
    for(int i = 2; i <= n; i++)
    {
        cout << "XOR 1 " << i << endl;
        cout.flush();
        cin >> xorvals[i];
        if(xorvals[i] == -1)
            return 0;
    }
    int xor12 = xorvals[2], xor13 = xorvals[3], xor23 = xorvals[2] ^ xorvals[3];
    int and12, and13, and23;
    andqueries("AND 1 2", and12);
    andqueries("AND 1 3", and13);
    andqueries("AND 2 3", and23);
    int x = xor12 + 2 * and12;
    int y = xor13 + 2 * and13;
    int z = xor23 + 2 * and23;
    assert((x + y - z) % 2 == 0);
    ans[1] = (x + y - z) / 2;
    for(int i = 2; i <= n; i++)
        ans[i] = (xorvals[i] ^ ans[1]);
    cout << "! ";
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
    cout.flush();
    return 0;
}