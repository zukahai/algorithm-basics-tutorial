/*
https://codeforces.com/contest/1418/problem/F
*/
#include <bits/stdc++.h>
 
using namespace std;

#define forn(i, n) for(int i = 0; i < int(n); i++)

const int N = 60;

typedef array<int, N> num;

num operator ^(const num &a, const num &b){
    num c;
    forn(i, N){
        c[i] = a[i] + b[i];
        if (c[i] >= 3) c[i] -= 3;
    }
    return c;
}

mt19937 rnd(42);

int main(){
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    forn(i, n){
        scanf("%d", &a[i]);
        --a[i];
    }
    
    vector<num> nums(n);
    forn(i, n) forn(j, N) nums[i][j] = rnd() % 3;
    
    vector<vector<int>> pos(n);
    vector<num> pr(1);
    map<num, int> cnt;
    cnt[pr[0]] = 1;
    int cur = 0;
    long long ans = 0;
    forn(i, n){
        pr.push_back(pr.back() ^ nums[a[i]]);
        pos[a[i]].push_back(i);
        if (pos[a[i]].size() >= 4){
            while (cur <= pos[a[i]][int(pos[a[i]].size()) - 4]){
                --cnt[pr[cur]];
                ++cur;
            }
        }
        ans += cnt[pr.back()];
        ++cnt[pr.back()];
    }
    
    printf("%lld\n", ans);
}