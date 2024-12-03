#include <bits/stdc++.h>  

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int check = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] >= a[i + 1]) {
            check = 1;
            break;
        }
    }

    if (check == 0)
        cout << "YES";
    else
        cout << "NO";
}