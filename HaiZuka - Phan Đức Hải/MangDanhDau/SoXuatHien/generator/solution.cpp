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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    unordered_map<int, int> cnt;
    for (int i = 0; i < n; i++) 
        cnt[a[i]]++;

    int res = 0;
    for (int i = 0; i < m; i++) 
        res += cnt[b[i]] > 0 ? 1 : 0;

    cout << res;
    


}
