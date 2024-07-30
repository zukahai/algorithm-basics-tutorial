#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    long long max = 1;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // i là ước của n, n/i cũng là ước của n
            if (i % 2 == 1 && i > max) {
                max = i;
            }
            if ((n / i) % 2 == 1 && (n / i) > max) {
                max = n / i;
            }
        }
    }
    cout << max;
}

/*
4: 1 4 2 2
10: 1 2 5 10
200: 1 200 | 2 100 | 4 50  | 5 40 | 8 25 | 10 20
1 là ước của 10 thì 10/1 cũng là ước của 10
2 là ước của 10 thì 10/2 cũng là ước của 10
Nếu i là ước của n thì n/i cũng là ước của n
i = n / i => i * i = n => i = sqrt(n)



*/