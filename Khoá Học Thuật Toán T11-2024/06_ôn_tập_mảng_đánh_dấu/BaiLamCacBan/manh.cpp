#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // nhập mảng;
    int n;
    cin >> n;
    int s;
    cin >> s;
    vector<int> a(n);
    unordered_map<long long, long long> dem;

    // nhập mảng
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // đếm số lần xuất hiện của phần tử
    for (int i = 0; i < n; i++)
        dem[a[i]]++;
    ll res = 0;
    // số lần xuất hiện sao cho a[i] + a[j] == s;

    for (pair<long long, long long> x : dem)
    {
        // hầu hết trường hợp
        if (dem.find(s - x.first) != dem.end())
        {
            if (x.first != s - x.first)
            {
                res += dem[x.first] * dem[s - x.first];
                dem[x.first] = 0;
            }
            else
            {
                if (x.first == s - x.first)
                {
                    if (dem.find(s - x.first) != dem.end())
                    {
                        res += dem[x.first] * (dem[s - x.first] - 1) / 2;
                    }
                }
            }
        }
    }
    cout << res;
    return 0;
}
