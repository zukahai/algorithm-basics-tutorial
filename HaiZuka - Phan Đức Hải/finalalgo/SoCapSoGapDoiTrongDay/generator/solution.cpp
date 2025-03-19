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
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    long long res = 0;
    for (pair<int, int> x : cnt) {
        if (x.first == 0) {
            res += 1ll * x.second * (x.second - 1) / 2;
        } else {
            if (cnt.find(2 * x.first) != cnt.end()) {
                res += 1ll * x.second * cnt[2 * x.first];
            }
        }
    }
    
    cout << res;

}
