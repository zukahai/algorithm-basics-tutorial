#include <bits/stdc++.h>

using namespace std;

int N = 1000000;
vector <bool> b(N, true);

void sang() {
    b[0] = b[1] = false;
    for (int i = 2; i <= sqrt(N); i++) {
        if (b[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
                b[j] = false;
            }
        }
    }
}

int main() {
    sang();
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (b[a[i]])
            count++;
    }
    cout << count;
}