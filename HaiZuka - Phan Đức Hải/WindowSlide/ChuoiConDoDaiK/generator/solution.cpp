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
    
    string s;
    int k;
    cin >> s >> k;
    int n = s.size();
    unordered_map<char, int> cnt;
    int count = 0;
    int res = 0;
    for (int i = 0; i < k; i++) {
        cnt[s[i]]++;
        if (cnt[s[i]] == 1) count++;
    }
    res += (count >= 3);
    for (int i = k; i < n; i++) {
        cnt[s[i - k]]--;
        if (cnt[s[i - k]] == 0) count--;
        cnt[s[i]]++;
        if (cnt[s[i]] == 1) count++;
        res += (count >= 3);
    }

    cout << res;

}
