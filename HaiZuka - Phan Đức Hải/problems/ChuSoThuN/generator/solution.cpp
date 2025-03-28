#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;

    long long p = 9;
    long long k = 1;

    while (n > p * k)
    {
        n -= p * k;
        p *= 10;
        k++;
    }

    long long m = 1;
    for (int i = 1; i < k; i++)
    {
        m *= 10;
    }

    long long h = (n + k - 1) / k;
    n -= (h - 1) * k;

    m += h - 1;
    string s = to_string(m);

    cout << s[n - 1];
    
}
