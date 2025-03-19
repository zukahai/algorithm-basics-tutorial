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
    
    long long n, m;
    long long k;
    cin >> n >> m >> k;
    long long count = 0;
    for (int i = 1; i <= sqrt(k); i++) {
        if (k % i == 0) {
            long long j = k / i;
            if (i <= m && j <= n) {
                count++;
            }
            if (i != j && j <= m && i <= n) {
                count++;
            }
        }
    }
    cout << count;
}
