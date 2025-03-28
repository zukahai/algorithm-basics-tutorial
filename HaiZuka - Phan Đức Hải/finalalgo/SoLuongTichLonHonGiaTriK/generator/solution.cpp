#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Không phải online judge sẽ đọc file input.txt, output.txt
    #ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    #endif
    // Bài giải của bạn ở dưới đây
    
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());

    long long res = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int l = i + 1, r = n - 1;
        int found = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (1ll * a[i] * a[mid] > k)
            {
                found = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if (found != -1) res += n - 1 - found + 1;
    }

    cout << res;

}
