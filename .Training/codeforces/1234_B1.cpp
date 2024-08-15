/*
https://codeforces.com/contest/1234/problem/B1
*/

#include <bits/stdc++.h>
using namespace std;
int a[201];
int main()
{
    bool kt = true;
    int n, n1, k, h, i, j, j2, index = 1;
    cin >> n1 >> k;
    n = n1;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = index; i < n; i++)
    {
        if (i - k >= 0)
            h = i - k;
        else
            h = 0;
        for (j = h; j < i; j++)
            if (a[i] == a[j])
            {
                for (j2 = i; j2 < n - 1; j2++)
                    a[j2] = a[j2 + 1];
                n--;
                i--;
                break;
            }
    }
    if (n <= k)
        cout << n << endl;
    else
        cout << k << endl;
    if (n <= k)
        for (i = n - 1; i >= 0; i--)
            cout << a[i] << " ";
    else
        for (i = n - 1; i >= n - k; i--)
            cout << a[i] << " ";
}