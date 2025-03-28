/*
https://codeforces.com/contest/1462/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

int a[513][10];
int x[10];
int N = 0;

void copy() {
    for (int i = 0; i < 9; i++)
        a[N][i] = x[i];
    N++;
}

void try2(int i) {
    for (int j = 0; j <= 1; j++) {
        x[i] = j;
        if (i == 8)
            copy();
        else {
            try2(i + 1);
        }
    }
}

int solve(int n) {
    int min = 999999999;
    for (int i = 0; i < N; i++) {
        int d = 0;
        for (int j = 0; j < 9; j++)
            d += (j + 1) * a[i][j];
        if (d == n) {
            int ans = 0;
            for (int k = 0; k < 9; k++)
                if (a[i][k] == 1)
                    ans = ans * 10 + k + 1;
            if (ans < min)
                min = ans;
        }
    }
    return (min == 999999999) ? -1 : min;
}

vector <int> b;

int main() {
    try2(0);
    int t, kk;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> kk;
        b.push_back(solve(kk));
    }
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << endl;
}