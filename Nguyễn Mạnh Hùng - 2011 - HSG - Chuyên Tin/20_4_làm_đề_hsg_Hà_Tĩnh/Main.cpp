#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector <long long> a = {1, 3, 5, 7, 9};
    int index = 0;
    while (a[a.size() - 1] <= n) {
        long long x = a[index];
        for (int i = 1; i <= 9; i += 2) 
            a.push_back(x * 10 + i);
        index++;
    }

    for (int i = 0; i < a.size(); i++) 
        if (a[i] <= n) 
            cout << a[i] << " ";
}