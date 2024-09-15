#include <bits/stdc++.h>

using namespace std;

vector<bool> s(10000009, true);  

int main() {
    int n;
    cin >> n;
    s[0] = s[1] = false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (s[i] == true) {
            for (int j = i * i; j <= n; j += i) {
                s[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (s[i] == true) {
            count++;
        }
    }

    cout << count;

}