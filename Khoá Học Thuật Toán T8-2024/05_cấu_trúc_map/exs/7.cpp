#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        mp[a[i] % 3]++;
    }

    long long s = 1ll * mp[1] * mp[2] + mp[0] * (mp[0] - 1) / 2;
    cout << s;

    
}

/*

s1 = 3a + 1
s2 = 3b + 2
s = 3a + 3b + 3

9
3 6 9 3 1 4 2 5 8
0 0 0 0 1 1 2 2 2

mp[0] = 4
mp[1] = 2
mp[2] = 3

Tổ hợp chập 2 của n phần tử: n * (n - 1) / 2
3 + 2 + 1

s = mp[1] * mp[2] + mp[0] * (mp[0] - 1) / 2

mp[k]: Số lượng các số chia 3 dư k


 */