#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector <int> a(1000009);
vector <int> d(1000009);

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
	    d[a[i]]++;
    }

    int max = 0;
    int x = 0; // so xuat hien nhieu nhat

    for (int i = 1; i <= n; i++) {
        if (d[a[i]] > max) {
            max = d[a[i]];
            x = a[i];
        }
    }
    cout << x << " " << max;

}