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
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 1;
    for (int i = 1; i < k; i++) {
        if (a[i] > a[i - 1]) count++;
        else count = 1;
    }
    int res = (count >= k);
    for (int i = k; i < n; i++) {
        if (a[i] > a[i - 1]) count++;
        else count = 1;
        if (count >= k) res++;
    }

    cout << res;

}
