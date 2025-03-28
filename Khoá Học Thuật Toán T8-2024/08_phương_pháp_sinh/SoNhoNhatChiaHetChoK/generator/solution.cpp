#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long k, n;
    cin >> n >> k;

    long long x = n / k;
    if (n % k != 0) 
        x++;
    cout << x * k;

    
}
