#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> cnt;

    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }

    int res = -1;

    int max = 0;

    for (auto x : cnt) {
        if (x.first % 2 == 0) {
            if (x.second > max || res == -1) {
                max = x.second;
                res = x.first;
            }
        }
    }

    cout << res;
    
}
