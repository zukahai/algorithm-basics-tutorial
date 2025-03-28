#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 5;
int c[N];
int b[N];
int t[N];

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int j = 1;
    t[0] = 0;
    for (auto i : mp)
    {
        b[j] = i.first;
        j++;
    }
    sort(b + 1, b + j);

    for (int i = 1; i < j; i++)
        t[i] = t[i - 1] + mp[b[i]];
    /*
      for(int i = 1;i<j;i++)
      {
          cout << b[i] << ' ' << t[i] << '\n';
      }*/
    int res = 0;
    for (int i = 1; i < j; i++)
    {
        if (mp[b[i]] >= 2)
        {
            int maxb = 2 * b[i] - 1;
            int index;
            int l = 1, r = j - 1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (b[mid] <= maxb)
                {
                    index = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            int temp = t[index];

            if (b[index] >= b[i])
                temp -= mp[b[i]];
            res += temp * (mp[b[i]] * (mp[b[i]] - 1) / 2);
        }

        if (mp[b[i]] >= 3)
        {
            res += mp[b[i]] * (mp[b[i]] - 1) * (mp[b[i]] - 2) / 6;
            //   cout << "1'\n";
        }

        // cout << res << '\n';
    }
    cout << res;
}