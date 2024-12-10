#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    unordered_map<int, int> cnt;
    for (int x : a) cnt[x]++;

    int res = 0;
    for (int x : b) res += cnt[x];

    cout << res;
    


}
