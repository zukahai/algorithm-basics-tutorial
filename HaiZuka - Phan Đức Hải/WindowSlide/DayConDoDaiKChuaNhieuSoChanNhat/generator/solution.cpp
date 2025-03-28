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
    long long count = 0;
    for (int i = 0; i < k; i++) 
        if (a[i] % 2 == 0) 
            count++;
    long long res = count;
    for (int i = k; i < n; i++) 
    {
        if (a[i] % 2 == 0) 
            count++;
        if (a[i - k] % 2 == 0)
            count--;
        res = max(res, count);
    }
    cout << res;

}
