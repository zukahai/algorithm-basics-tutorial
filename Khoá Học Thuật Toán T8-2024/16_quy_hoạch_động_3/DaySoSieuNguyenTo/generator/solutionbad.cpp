#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool checkSuperPrime(long long n)
{
    if (n < 2)
        return false;
    while (n > 0)
    {
        if (!isPrime(n))
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<long long> a(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = (checkSuperPrime(a[0]) ? 1 : 0);

    for (int i = 1; i < n; i++) {
        if (checkSuperPrime(a[i]))
        {
            dp[i] = dp[i - 1] + 1;
        }
    }

    int max = 0;
    int e = 0;

    for (int i = 0; i < n; i++) {
        if (dp[i] > max) {
            e = i;
            max = dp[i];
        }
    }

    if (max == 0)
    {
        cout << -1;
    }
    else
    {
        cout << max << endl;
        int s = e - max + 1;
        for (int i = s; i <= e; i++) {
            cout << a[i] << " ";
        }
    }
    
}
