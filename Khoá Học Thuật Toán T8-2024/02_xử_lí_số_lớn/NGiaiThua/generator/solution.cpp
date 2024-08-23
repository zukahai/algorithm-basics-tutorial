#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    long long res = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        res = (res * i) % m;
    }
    cout << res;
}
