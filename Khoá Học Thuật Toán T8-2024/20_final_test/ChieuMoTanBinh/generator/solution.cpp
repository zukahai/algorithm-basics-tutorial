#include<bits/stdc++.h>
using namespace std;

map <int, bool> mp;

int solve(int n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            mp[i] = 1;
            mp[n / i] = 1;
        }
    }
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        solve(x);
    }

    cout << mp.size() << endl;

    
}
