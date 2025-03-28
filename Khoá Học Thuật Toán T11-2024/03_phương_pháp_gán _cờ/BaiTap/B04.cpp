#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string flag = "YES";
    for (int i = 0; i < n; i++) {
        if (a[i] != 4 && a[i] != 7) {
            flag = "NO";
            break;
        }
    }

    cout << flag;
    
}