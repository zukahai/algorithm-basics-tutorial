/*
https://codeforces.com/contest/1476/problem/D
*/
#include<bits/stdc++.h>

using namespace std;

const int INF = int(1e9);

char buf[300043];

int main()
{
    int t;
    scanf("%d", &t);
    for(int _ = 0; _ < t; _++)
    {
        int n;
        scanf("%d", &n);
        scanf("%s", buf);
        string s = buf;
        vector<vector<int>> g(2 * n + 2);
        for(int i = 0; i < n; i++)
            if(s[i] == 'L')
            {
                g[(i + 1) * 2].push_back(i * 2 + 1);
                g[i * 2 + 1].push_back((i + 1) * 2);
            }
            else
            {
                g[i * 2].push_back((i + 1) * 2 + 1);
                g[(i + 1) * 2 + 1].push_back(i * 2);   
            }
        vector<int> comp(2 * n + 2, -1);
        vector<int> cnt;
        for(int i = 0; i < 2 * n + 2; i++)
        {
            if(comp[i] != -1) continue;
            int c = 1;
            int cc = cnt.size();
            queue<int> q;
            comp[i] = cc;
            q.push(i);
            while(!q.empty())
            {
                int k = q.front();
                q.pop();
                for(auto y : g[k])
                {
                    if(comp[y] == -1)
                    {
                        c++;
                        comp[y] = cc;
                        q.push(y);
                    }
                }
            }
            cnt.push_back(c);
        }
        for(int i = 0; i <= n; i++)
            printf("%d%c", cnt[comp[i * 2]], " \n"[i == n]);
    }
}