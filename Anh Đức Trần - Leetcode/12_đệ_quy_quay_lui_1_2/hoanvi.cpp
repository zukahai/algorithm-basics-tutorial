#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
vector<bool> check(10, true);
int N;

void dequy(int n){
    if (n == N) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (check[i] == true) {
            a[n] = i;
            check[i] = false;
            dequy(n + 1);
            check[i] = true;
        }
    }
}

int main() {
    cin >> N;

    dequy(0);
    return 0;
}