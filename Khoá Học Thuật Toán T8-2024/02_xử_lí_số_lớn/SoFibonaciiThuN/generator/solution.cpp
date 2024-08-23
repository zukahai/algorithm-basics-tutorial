#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long fn2 = 1, fn1 = 1, fn = 1;
    int n;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        fn = (fn1 + fn2) % m;
        fn2 = fn1;
        fn1 = fn;
    }
    cout << fn;
}
