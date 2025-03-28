#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<long long> a;
    long long x;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0)
            a.push_back(x);
    }
    int k;
    cin >> k;

    sort(a.begin(), a.end());
    if (k > a.size())
        cout << "NO";
    else
        cout << a[k - 1];

}