#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> a = {1, 3, 5, 7, 9};
    int index = 0;

    while(a[a.size() - 1] <= n) {
        for (int i = 1; i <= 9; i += 2) {
            int t = a[index] * 10 + i;
            a.push_back(t);
        }
        index++;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= n)
            cout << a[i] << " ";
    }
}