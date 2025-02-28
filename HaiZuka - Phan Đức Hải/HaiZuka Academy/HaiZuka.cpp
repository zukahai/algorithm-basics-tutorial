#include <bits/stdc++.h>

using namespace std;
vector<int>b;
void sangNT(int n) {
    b.resize(n + 1, 1);
    b[0] = b[1] = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (b[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                b[j] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("HaiZuka.inp", "r", stdin);
    freopen("HaiZuka.out", "w", stdout);

    sangNT(10000000);

    int res = 0;
    int last = 2;
    int a, c;
    for (int i = 3; i <= 10000000; i++) {
        if (b[i] == 1) {
            if (i - last > res) {
                res = i - last;
                a = last;
                c = i;
            }
            last = i;
        }
    }
    cout << res << " " << a << " " << c;
}