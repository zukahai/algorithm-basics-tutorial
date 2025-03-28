#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector <long long> listUoc (long long n)
{
    vector <long long> res;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            if (i != n / i) res.push_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long a, b;
    cin >> a >> b;
    long long k = gcd(a, b);
    vector <long long> res = listUoc(k);

    for (long long i : res) cout << i << " ";
    
}
