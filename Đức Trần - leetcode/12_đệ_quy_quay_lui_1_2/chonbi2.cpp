#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
int N;

void dequy(int n) {
    if (n == N) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= 3; i++) {
        a[n] = i;
        dequy(n + 1);
    }
}

int main() {
    cin >> N;
    dequy(0);
}