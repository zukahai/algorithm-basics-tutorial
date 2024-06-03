#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, G, M, K;
    int ans = 0;
    cin >> T >> G >> M >> K;
    if (G < M - K || T < M) {
        ans = T / G;
    } else {
        if (T >= M) {
            ans = (T - M) / (M - K) + 1;
            ans += (T - ans * (M - K)) / G;
        }
    }
    cout << ans;
}