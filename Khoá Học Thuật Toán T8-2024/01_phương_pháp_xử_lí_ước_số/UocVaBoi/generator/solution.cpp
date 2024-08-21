#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long a, b;
    cin >> a >> b;
    if (a % b != 0) {
        cout << 0;
        return 0;
    } 

    long long c = a / b;
    long long res = 0;
    for (long long i = 1; i * i <= c; i++) {
        if (c % i == 0) {
            res += 2;
        }
    }

    if ((long long)sqrt(c) * (long long)sqrt(c) == c) {
        res--;
    }

    cout << res;
}
