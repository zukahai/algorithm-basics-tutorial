#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

long long solve(long long a, long long b) {
    a %= m;
    if (b == 0) return 1;
    long long res = 1;

    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % m;
            b--;
        } else {
            a = (a * a) % m;
            b /= 2;
        }
    }

    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;

    long long res = (n * (n + 1) % m) * (2 * n + 1) % m * solve(6, m - 2) % m;
    res += n * (n + 1) % m * solve(2, m - 2) % m;
    res *= solve(2, m - 2);
    res %= m;
    cout << res;
}

/*
py

n = int(input())
m = 1000000007
res = (n * (n + 1) // 2) + (n * (n + 1) * (2 * n + 1) // 6)
print(res % m)

*/
