#include <bits/stdc++.h>

using namespace std;

#define m 1000000007

int main() {
    long long a, b;
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a > b) {
            cout << 0 << "\n";
            continue;
        }
        long long n1 = a + b;
        long long n2 = b - a + 1;
        if (n1 % 2 == 0)
            n1 /= 2;
        else
            n2 /= 2;
        long long s = ((n1 % m) * (n2 % m)) % m;
        cout << s << "\n";
    }
}

/*

a -> b
3->6

 s = 3 + 4 + 5 + 6
 s = 6 + 5 + 4 + 3
2s = 9 + 9 + 9 + 9

2s = 9 * 4
s = (9 * 4) / 2

4->6
s = 4 + 5 + 6
s = 6 + 5 + 4
2s = 10 + 10 + 10
s = (10 * 3) / 2

s = (a + b) * (b - a + 1) / 2



*/