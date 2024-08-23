#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sum = 0, product = 1;
    for (int i = 0; i < n; i++)
    {
        sum = (sum + a[i]) % m;
        product = (product * a[i]) % m;
    }
    cout << sum << endl << product;
}
