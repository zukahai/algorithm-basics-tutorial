#include <bits/stdc++.h>

using namespace std;
long long n, cnt;
int main()
{
    cin >> n;
    for (int i = 1; (long long)i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt = cnt + i + n / i;
        }
    }
    double k = sqrt(n);
    if (k == (long long)k)
    {
        cnt = cnt - k;
    }
    cout << cnt;
    return 0;
}
