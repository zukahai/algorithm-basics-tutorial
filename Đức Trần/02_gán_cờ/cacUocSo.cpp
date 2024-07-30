#include <bits/stdc++.h>

using namespace std;

// 1 4 9 16 25 36 49 64 81 100 ...
bool isCP(int n) {
    float x = sqrt(n);
    return x == (int)x;
}

int main() {
    long long n;
    int count = 0;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // i là ước của n, n/i cũng là ước của n
            count += 2;
        }
    }

    if (isCP(n)) {
        count--;
    }

    cout << count;
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