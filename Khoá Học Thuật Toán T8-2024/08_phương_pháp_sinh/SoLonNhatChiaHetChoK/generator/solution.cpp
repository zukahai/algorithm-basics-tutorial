#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long k, n;
    cin >> n >> k;

    long long x = n / k;
    cout << x * k;

    
}
