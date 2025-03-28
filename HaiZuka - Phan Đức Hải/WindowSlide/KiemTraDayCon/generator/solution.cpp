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
    
    unordered_map<int, int> cnt;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        cnt[a[i]]++;
        if (cnt[a[i]] == 1) count++;
    }

    int minCount = count;
    for (int i = k; i < n; i++) {
        cnt[a[i - k]]--;
        if (cnt[a[i - k]] == 0) count--;
        cnt[a[i]]++;
        if (cnt[a[i]] == 1) count++;
        minCount = min(minCount, count);
    }
    cout << (minCount == k ? "YES" : "NO");

}
