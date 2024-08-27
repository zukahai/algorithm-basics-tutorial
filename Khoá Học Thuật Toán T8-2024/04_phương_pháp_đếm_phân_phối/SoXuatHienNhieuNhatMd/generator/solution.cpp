#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, int> mp;
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    long long res = 0;
    int max_freq = -1000000;

    for (auto x : mp)
        if (x.second > max_freq)
        {
            max_freq = x.second;
            res = x.first;
        }
    
    cout << res;
}
