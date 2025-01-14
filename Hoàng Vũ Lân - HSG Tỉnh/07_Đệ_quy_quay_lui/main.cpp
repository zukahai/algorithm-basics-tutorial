#include <bits/stdc++.h>

using namespace std;

int n;
int a[11];

void deQuy(int index, ofstream &cout) {
    if (index > n) {
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
        return;
    }
    for (int i = a[index - 1]; i <= 3; i++) {
        a[index] = i;
        deQuy(index + 1, cout);
    }
}

int main() {
    ifstream cin("MAIN.INP");
    ofstream cout("MAIN.OUT");
    cin >> n;
    a[0] = 1;
    deQuy(1, cout);
}