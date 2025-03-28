#include<bits/stdc++.h>
using namespace std;

bool isSquare(long long n) {
    if (n < 0) return false;
    long long m = sqrt(n);
    return m * m == n;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> dp(n, 0);

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = (a[0] % 2 == 0 && isSquare(a[0])) ? 1 : 0;
    for (long long i = 1; i < n; i++) {
        if (a[i] % 2 == 0 && isSquare(a[i])) {
            if (a[i] > a[i - 1]) {
                dp[i] = dp[i - 1] + 1;
            } else {
                dp[i] = 1;
            }
        }
    }

    long long max = dp[0];
    long long e = 0;
    for (long long i = 0; i < n; i++) {
        if (dp[i] > max) {
            e = i;
            max = dp[i];
        }
    }

    if (max == 0) {
        cout << -1;
        return 0;
    }
    cout << max << endl;
    int s = e - max + 1;   
    for (int i = s; i <= e; i++) {
        cout << a[i] << " ";
    }
    
}
