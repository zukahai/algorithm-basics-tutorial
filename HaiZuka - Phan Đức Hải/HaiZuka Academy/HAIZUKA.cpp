#include <bits/stdc++.h>

using namespace std;

int main() {
    // Nhập xuất nhanh
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // Đọc file
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif

    // Chương trình chính
    
    int n;
    long long k;
    cin >> n >> k;
    vector <int> a(n + 1);
    vector <long long> prefix(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    prefix[0] = 0;
    for(int i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + a[i];
    
    unordered_map <long long, int> cnt;

    long long res = 0;
    for (int i = 0; i <= n; i++) {
        res += cnt[prefix[i] - k];
        cnt[prefix[i]] ++;
    }
    cout << res;
    
}