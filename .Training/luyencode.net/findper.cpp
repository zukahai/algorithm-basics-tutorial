#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    vector<int> a(n);
    int start = n / 2;
    int value = 1;
    int d = (n % 2 == 0) ? -1 : 1;
    while(n --) {
        cin >> t;
        a[start] = t;
        start += d * value;
        d = -d;
        value ++;
    }

    for(int i = 0; i < a.size(); i ++) {
        cout << a[i] << " ";
    }
}