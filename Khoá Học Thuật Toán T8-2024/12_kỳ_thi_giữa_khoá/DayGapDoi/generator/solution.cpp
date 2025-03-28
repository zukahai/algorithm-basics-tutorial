#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map <int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    long long res = 0;
    for (auto x : mp) {
        if (x.first == 0) {
            res += 1ll * x.second * (x.second - 1);
        } else {
            res += 1ll * x.second * mp[2 * x.first];
        }
    }

    cout << res;


    
}
