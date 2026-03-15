#include <bits/stdc++.h>

using namespace std;

bool isSquare(int n) {
    int s = sqrt(n);
    return s * s == n;
}

bool check(int n) {
    if (isSquare(n % 10 + (n / 10) % 10) == false)
        return false;
    while (n >= 10) {
        n /= 10;
    } 
    return isSquare(n);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // Viết lời giải ở bên dưới
    
    int m;
    cin >> m;
    int cnt = 0;
    for (int i = 100; i <= m; i++) {
        if (check(i))
            cnt++;
    }
    cout << cnt;
}
