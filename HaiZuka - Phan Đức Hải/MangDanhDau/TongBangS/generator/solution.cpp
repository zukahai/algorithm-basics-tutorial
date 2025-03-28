#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<long long, long long> cnt;
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += cnt[s - a[i]];
        cnt[a[i]]++;
    }

    cout << res;
    return 0;

}
