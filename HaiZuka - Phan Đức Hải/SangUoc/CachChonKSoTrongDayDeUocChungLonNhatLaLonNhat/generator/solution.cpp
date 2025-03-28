#include<bits/stdc++.h>
using namespace std;

vector <int> dem(10000009, 0);
vector <int> b(10000009, 0);

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        dem[a[i]]++;

    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
        
    b[1] = n;
    for (int i = 2; i <= max; i++)
        for (int j = i; j <= max; j += i)
            b[i] += dem[j];
    
    for (int i = max; i >= 1; i--)
        if (b[i] >= k)
        {
            cout << i;
            return 0;
        }

}
