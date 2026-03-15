#include <bits/stdc++.h>

using namespace std;
int a[1000009];
int dem[10000009];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        dem[a[i]]++;

    for (int i = 1; i <= 10000000; i++)
        if (dem[i] > 0)
            cout << i << " " << dem[i] << endl;
}