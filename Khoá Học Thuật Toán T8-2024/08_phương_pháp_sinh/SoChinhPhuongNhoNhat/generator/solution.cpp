#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    long long x = sqrt(n);

    if (x * x != n) x ++;

    cout << x * x;
}
