#include<bits/stdc++.h>
using namespace std;

long long solve(long long n) {
    long long res = -1;
    long long l = 1, r = 1e18;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (mid / 2.0 >= 1.0 * n / (mid + 1)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    long long n;
    cin >> n;
    cout << solve(n) << endl;


}
