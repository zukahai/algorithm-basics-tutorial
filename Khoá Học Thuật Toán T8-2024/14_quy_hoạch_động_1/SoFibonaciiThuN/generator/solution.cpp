#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector <long long> f(1000001);
    f[1] = f[2] = 1;
    for (int i = 3; i <= 1000000; i++)
    {
        f[i] = (f[i - 1] + f[i - 2]) % m;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}
