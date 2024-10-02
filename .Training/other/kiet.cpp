#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int n, a[N];

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        vector<int> s;
    cin >> n;
    
    for (int i = 1;i <= n;i++) 
        cin >> a[i];
    
    sort(a+1,a+n+1);

    
    for (int p=1;p<=n;p++) 
    {
        int tim = 3 * a[p];
        for (int i = 1,j=n;i < j;) 
        {
            if (i == p) 
            {
                i++; 
                continue; 
            }
            
            if (j == p)
            {
                j--; 
                continue; 
                
            }
            
            int sum = a[i] + a[j];
            
            if (sum == tim - a[p])
            {
                s.push_back(a[p]);
                break;
            } 
            else if (sum < tim - a[p]) 
                i++;
            else 
                j--;
            
        }
    }

    for (int i = 0;i < s.size();i++) 
        cout << s[i] << " ";
}