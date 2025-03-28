#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int n;
    long long m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long res = 1e18;
    long long left = 1, right = 1e18;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mid / a[i];
            if (sum >= m) {
                break;
            }
        }
        if (sum >= m) {
            res = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << res;

}
