#include<bits/stdc++.h>
using namespace std;

bool isSquare(long long n)
{
    long long x = sqrt(n);
    return x * x == n;
}

int binarySearch(vector <int> &a, int l, int r, int x)
{
    int res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] <= x) {
            l = mid + 1;
            res = mid;
        }
        else
            r = mid - 1;
    }
    return res;
}

int main()
{
    // ifstream cin("FANDOM.INP");
    // ofstream cout("FANDOM.OUT");
    // Bài giải của bạn ở dưới đây
     ifstream cin("input.txt");
    ofstream cout("output.txt");

    // sang nguyen to
    vector <int> prime(100001, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(100000); i++)
        if (prime[i])
            for (int j = i * i; j <= 100000; j += i)
                prime[j] = 0;
    
    int n, k;
    cin >> n >> k;
    vector <int> a(n + 1);
    vector <int> cnt(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++) {
        cnt[i] = cnt[i - 1];
        if (isSquare(a[i]) && prime[sqrt(a[i])])
            cnt[i]++;
    }

    long long ans = 0;

    for (int i = 1; i <= n; i++) {
        int pos = binarySearch(cnt, 0, i - 1, cnt[i] - k);
        if (pos != -1)
            ans += pos + 1;
    }

    cout << ans;

    


}
