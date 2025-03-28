#include<bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long n) {
    long long l = 1, r = n;
    long long res = 0;
    while (l <= r) {
        long long m = (l + r) / 2;
        long long pen = (m / a) * b + m;
        if (pen >= n) {
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

 main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    long long a, b, n;
    cin >> a >> b >> n;
    cout << solve(a, b, n);

}
