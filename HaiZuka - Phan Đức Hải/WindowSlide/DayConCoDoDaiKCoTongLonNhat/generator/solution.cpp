#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    #endif
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    long long sum = 0;
    for (int i = 0; i < k; i++) 
        sum += a[i];
    long long res = sum;
    for (int i = k; i < n; i++) 
    {
        sum += a[i] - a[i - k];
        res = max(res, sum);
    }
    cout << res;

}
