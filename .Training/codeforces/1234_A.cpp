/*
https://codeforces.com/contest/1234/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101];
int s[101];
int tb(int a[], int n);
int main()
{
    int q, i, j;
    cin >> q;
    for (i = 0; i < q; i++)
    {
        cin >> n;
        for (j = 0; j < n; j++)
            cin >> a[j];
        s[i] = tb(a, n);
    }
    for (i = 0; i < q; i++)
        cout << s[i] << endl;
}

int tb(int a[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        k += a[i];
    if (k % n == 0)
        return k / n;
    else
        return k / n + 1;
}