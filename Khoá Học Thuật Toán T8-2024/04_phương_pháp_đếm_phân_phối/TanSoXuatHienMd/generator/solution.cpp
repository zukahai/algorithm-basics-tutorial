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


    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
    
    
}