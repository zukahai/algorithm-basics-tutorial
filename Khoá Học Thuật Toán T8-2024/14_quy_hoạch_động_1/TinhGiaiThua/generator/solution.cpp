#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector <long long> f(1000001);
    f[1] = 1;
    for (int i = 2; i <= 1000000; i++)
        f[i] = (f[i - 1] * i) % m;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}
